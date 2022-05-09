#include "Funcionario.hpp"
#include "Cargo.hpp"
#include "Promocao.hpp"

void promover(Funcionario& funcionario, bool bateuAMeta)
{
	if (!bateuAMeta)
	{
		// Funcionario que n�o bate a meta n�o pode ser promovido.
		return;
	}

	// Promove para o proximo cargo
	Cargo novoCargo = proximoCargo(funcionario.getCargo());
	funcionario.promove(novoCargo);
}

Cargo proximoCargo(Cargo cargoAtual)
{
	switch (cargoAtual)
	{
	case Cargo::ASSISTENTE:
		return Cargo::ANALISTA;
	case Cargo::ANALISTA:
		return Cargo::ESPECIALISTA;
	case Cargo::ESPECIALISTA:
		return Cargo::GERENTE;
	default:
		return Cargo::GERENTE;
	}
}