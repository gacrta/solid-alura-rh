#pragma once
#include <string>
#include "Cargo.hpp"
#include "DadosPessoais.hpp"

/**
 * Classe Terceirizado
 * Terceirizado representa um funcionario terceirizado (portanto n�o � exatamente um funcion�rio
 * 
 * O terceirizado possui dados em comum ao funcion�rio do RH, mas o RH n�o � respons�vel por promover ou
 * dar aumentos ao terceirizado. Essa responsabilidade � da empresa do terceirizado.
 * Por esse motivo, n�o podemos fazer a classe Terceirizado extender a classe Funcion�rio.
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
