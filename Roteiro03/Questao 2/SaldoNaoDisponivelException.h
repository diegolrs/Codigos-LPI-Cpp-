#pragma once
#include <string>

class SaldoNaoDisponivelException : public std::exception
{
	public:
		std::string getMsgErro();
	private:
		std::string msgErro = "Saldo indisponivel";
};