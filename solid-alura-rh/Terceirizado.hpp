#pragma once
#include <string>
#include "Cargo.hpp"
#include "DadosPessoais.hpp"

/**
 * Classe Terceirizado
 * Terceirizado representa um funcionario terceirizado (portanto não é exatamente um funcionário
 * 
 * O terceirizado possui dados em comum ao funcionário do RH, mas o RH não é responsável por promover ou
 * dar aumentos ao terceirizado. Essa responsabilidade é da empresa do terceirizado.
 * Por esse motivo, não podemos fazer a classe Terceirizado extender a classe Funcionário.
 */
class Terceirizado
{
private:
	DadosPessoais dados;
	std::string empresa;

public:

	Terceirizado(const std::string& nome, const std::string& cpf, Cargo cargo, double salario, const std::string& empresa);

	std::string getNome() const;
	std::string getCpf() const;
	std::string getEmpresa() const;
	Cargo getCargo() const;
	double getSalario() const;
};
