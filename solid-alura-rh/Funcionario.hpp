#pragma once
#include <string>
#include <chrono>
#include "Cargo.hpp"

class Funcionario
{
	using Data = std::chrono::time_point<std::chrono::steady_clock>;

private:
	std::string nome;
	std::string cpf;
	Cargo cargo;
	double salario;
	Data dataUltimoReajuste;

public:

	Funcionario(const std::string& nome, const std::string& cpf, Cargo cargo, double salario);
	void reajustarSalario(double novoSalario);


	std::string getNome() const;
	std::string getCpf() const;
	Cargo getCargo() const;
	double getSalario() const;
	Data getDataUltimoReajuste() const;
};
