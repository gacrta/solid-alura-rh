#include <chrono>
#include "ReajusteSalarial.hpp"
#include "ValidacaoException.hpp"

void reajustaSalarioDeFuncionario(Funcionario& funcionario, double aumento)
{
	validaPercentualDeReajuste(funcionario, aumento);
	validaIntervaloEntreReajustes(funcionario);

	const auto novoSalario = funcionario.getSalario() + aumento;
	funcionario.reajustarSalario(novoSalario);
}

void validaPercentualDeReajuste(const Funcionario& funcionario, double aumento)
{
	const auto percentualReajuste = aumento / funcionario.getSalario();
	if (percentualReajuste > 0.4) {
		throw ValidacaoException("Reajuste nao pode ser superior a 40% do salario!");
	}
}

void validaIntervaloEntreReajustes(const Funcionario& funcionario)
{
	// conforme definido em https://en.cppreference.com/w/cpp/chrono/duration
	using Meses = std::chrono::duration<int, std::ratio<2629746>>;

	const auto dataAtual = std::chrono::system_clock::now();
	const auto dataUltimoReajuste = funcionario.getDataUltimoReajuste();
	const auto diferencaEmMeses = std::chrono::duration_cast<Meses>(dataAtual - dataUltimoReajuste).count();
	if (diferencaEmMeses < 6) {
		throw ValidacaoException("Menos de 6 meses entre reajustes!");
	}
}