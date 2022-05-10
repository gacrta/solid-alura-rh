#include "Funcionario.hpp"

Funcionario::Funcionario(const std::string& nome, const std::string& cpf, Cargo cargo, double salario) :
	dados{ nome, cpf, cargo, salario }, dataUltimoReajuste{}
{
}

void Funcionario::reajustarSalario(double novoSalario)
{
	dados.salario = novoSalario;
	dataUltimoReajuste = std::chrono::system_clock::now();
}

void Funcionario::promove(Cargo novoCargo)
{
	dados.cargo = novoCargo;
}

std::string Funcionario::getNome() const
{
	return dados.nome;
}

std::string Funcionario::getCpf() const
{
	return dados.cpf;
}

Cargo Funcionario::getCargo() const
{
	return dados.cargo;
}

double Funcionario::getSalario() const
{
	return dados.salario;
}


Funcionario::Data Funcionario::getDataUltimoReajuste() const {
	return dataUltimoReajuste;
}
