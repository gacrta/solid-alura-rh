#pragma once
#include <string>
#include <ctime>
#include "Cargo.hpp"

class Funcionario
{
private:
	std::string nome;
	std::string cpf;
	Cargo cargo;
	double salario;
	std::time_t dataUltimoReajuste;

public:

	Funcionario(const std::string& nome, const std::string& cpf, Cargo cargo, double salario);
	void reajustarSalario(double novoSalario);


	std::string getNome() const;
	std::string getCpf() const;
	Cargo getCargo() const;
	double getSalario() const;
	std::time_t getDataUltimoReajuste() const;
};
