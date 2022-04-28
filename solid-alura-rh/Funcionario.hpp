#pragma once
#include <string>
#include <ctime>

enum class Cargo : short
{
	ASSISTENTE,
	ANALISTA,
	ESPECIALISTA,
	GERENTE
};

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
	void reajustarSalario(double aumento);


	std::string getNome() const;
	std::string getCpf() const;
	Cargo getCargo() const;
	double getSalario() const;
	std::time_t getDataUltimoReajuste() const;
};
