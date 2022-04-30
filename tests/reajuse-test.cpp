#include "catch.hpp"

#include <string>
#include "Funcionario.hpp"
#include "ReajusteSalarial.hpp"
#include "ValidacaoException.hpp"

TEST_CASE("Reajuste")
{

	SECTION("Reajuste Abaixo 40%")
	{
		// Arrange - Given
		Funcionario funcionario("Gabriel", "123.456.789-00", Cargo::ANALISTA, 2000);
		const auto aumento(600);

		// Act - When
		reajustaSalarioDeFuncionario(funcionario, aumento);

		// Assert - Then
		REQUIRE(funcionario.getSalario() == 2600.0);
	}

	SECTION("Reajuste Igual 40%")
	{
		// Arrange - Given
		Funcionario funcionario("Gabriel", "123.456.789-00", Cargo::ANALISTA, 2000);
		const auto aumento(800);

		// Act - When
		reajustaSalarioDeFuncionario(funcionario, aumento);

		// Assert - Then
		REQUIRE(funcionario.getSalario() == 2800.0);
	}

	SECTION("Reajusta Superior 40%")
	{
		// Arrange - Given
		Funcionario funcionario("Gabriel", "123.456.789-00", Cargo::ANALISTA, 2000);
		const auto aumento(1000);

		// Act - When
		CHECK_THROWS(reajustaSalarioDeFuncionario(funcionario, aumento));

		// Assert - Then
		REQUIRE(funcionario.getSalario() == 2000.0);
	}
}