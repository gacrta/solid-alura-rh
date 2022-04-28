#include "ValidacaoException.hpp"

ValidacaoException::ValidacaoException(const std::string& mensagem) : std::invalid_argument(mensagem)
{
}