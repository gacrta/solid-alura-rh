#include "Terceirizado.hpp"

Terceirizado::Terceirizado(const std::string& nome, const std::string& cpf, Cargo cargo, double salario, const std::string& empresa) :
	dados{ nome, cpf, cargo, salario }, empresa{ empresa }
{
}

std::string Terceirizado::getNome() const
{
	return dados.nome;
}

std::string Terceirizado::getCpf() const
{
	return dados.cpf;
}

std::string Terceirizado::getEmpresa() const
{
	return empresa;
}

Cargo Terceirizado::getCargo() const
{
	return dados.cargo;
}

double Terceirizado::getSalario() const
{
	return dados.salario;
}
