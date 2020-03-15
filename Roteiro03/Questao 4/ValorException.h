#pragma once
#include <string>

class ValorAbaixoException : public std::exception
{
	public:
		std::string getMsg()
		{
			return "Valor menor ou igual a zero!";
		}
};

class ValorAcimaException : public std::exception
{
	public:
		std::string getMsg()
		{
			return "Valor maior que 100 e menor que 1000!";
		}
};

class ValorMuitoAcimaException : public std::exception
{
	public:
		std::string getMsg()
		{
			return "Valor maior ou igual a 1000!";
		}
};