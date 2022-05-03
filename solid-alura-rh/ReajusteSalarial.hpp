#pragma once
#include "Funcionario.hpp"

void reajustaSalarioDeFuncionario(Funcionario& funcionario, double novoSalario);
void validaPercentualDeReajuste(const Funcionario& funcionario, double aumento);
void validaIntervaloEntreReajustes(const Funcionario& funcionario);