#pragma once
#include <string>
#include <chrono>
#include "Cargo.hpp"
#include "DadosPessoais.hpp"

class Funcionario
{
	using Data = std::chrono::time_point<std::chrono::system_clock>;

private:
	DadosPessoais dados;
	Data dataUltimoReajuste;

public:

	Funcionario(const std::string& nome, const std::string& cpf, Cargo cargo, double salario);
	void reajustarSalario(double novoSalario);
	void promove(Cargo novoCargo);


	std::string getNome() const;
	std::string getCpf() const;
	Cargo getCargo() const;
	double getSalario() const;
	Data getDataUltimoReajuste() const;
};
