#include "catch.hpp"

#include <string>
#include "Funcionario.hpp"
#include "Promocao.hpp"
#include "Cargo.hpp"

TEST_CASE("Promocao")
{
	SECTION("Nao bateu meta")
	{
		// Arrange - Given
		Funcionario funcionario("Gabriel", "123.456.789-00", Cargo::ANALISTA, 2000);
		bool bateuMeta = false;

		// Act - When
		promover(funcionario, bateuMeta);

		// Assert - Then
		REQUIRE(funcionario.getCargo() == Cargo::ANALISTA);
	}

	SECTION("Promover ANALISTA para ESPECIALISTA")
	{
		// Arrange - Given
		Funcionario funcionario("Gabriel", "123.456.789-00", Cargo::ANALISTA, 2000);
		bool bateuMeta = true;

		// Act - When
		promover(funcionario, bateuMeta);

		// Assert - Then
		REQUIRE(funcionario.getCargo() == Cargo::ESPECIALISTA);
	}

	SECTION("GERENTE nao pode ser promovido")
	{
		// Arrange - Given
		Funcionario funcionario("Gabriel", "123.456.789-00", Cargo::GERENTE, 2000);
		bool bateuMeta = true;

		// Act - When
		promover(funcionario, bateuMeta);

		// Assert - Then
		REQUIRE(funcionario.getCargo() == Cargo::GERENTE);
	}
}