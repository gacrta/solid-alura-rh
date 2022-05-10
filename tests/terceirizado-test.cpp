#include "catch.hpp"

#include <string>
#include "Terceirizado.hpp"

TEST_CASE("Terceirizado")
{
	// Arrange - Given
	Terceirizado terceirizado("Gabriel", "123.456.789-00", Cargo::ANALISTA, 2000, "Rede");

	// Act - When
	std::string nome = terceirizado.getNome();

	// Assert - Then
	REQUIRE("Gabriel" == nome);
}