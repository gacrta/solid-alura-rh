#include "ReajusteSalarial.hpp"
#include "ValidacaoException.hpp"

void reajustaSalarioDeFuncionario(Funcionario& funcionario, double aumento)
{
	const auto salarioAtual = funcionario.getSalario();
	const auto percentualReajuste = aumento / salarioAtual;
	if (percentualReajuste > 0.4) {
		throw ValidacaoException("Reajuste nao pode ser superior a 40% do salario!");
	}
	const auto novoSalario = salarioAtual + aumento;
	funcionario.reajustarSalario(novoSalario);
}