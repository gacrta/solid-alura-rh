#include "Funcionario.hpp"

Funcionario::Funcionario(const std::string& nome, const std::string& cpf, Cargo cargo, double salario) :
	nome(nome), cpf(cpf), cargo(cargo), salario(salario)
{
}

void Funcionario::reajustarSalario(double novoSalario)
{
	salario = novoSalario;
	dataUltimoReajuste = std::time(nullptr);
}

std::string Funcionario::getNome() const
{
	return nome;
}

std::string Funcionario::getCpf() const
{
	return cpf;
}

Cargo Funcionario::getCargo() const
{
	return cargo;
}

double Funcionario::getSalario() const
{
	return salario;
}


std::time_t Funcionario::getDataUltimoReajuste() const {
	return dataUltimoReajuste;
}
