#include "catch.hpp"

#include <string>
#include "Funcionario.hpp"

TEST_CASE("Funcionario")
{
	// Arrange - Given
	Funcionario funcionario("Gabriel", "123.456.789-00", Cargo::ANALISTA, 2000);

	// Act - When
	std::string nome = funcionario.getNome();

	// Assert - Then
	REQUIRE("Gabriel" == nome);
}