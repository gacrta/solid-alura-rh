#pragma once
#include <stdexcept>
#include <string>

class ValidacaoException : public std::invalid_argument
{
public:
	ValidacaoException(const std::string& mensagem );
};