#ifndef _EMPREGADO_H_
#include <string>


class Empregado{
	
	public:
	Empregado(std::string nome, std::string sobrenome, float valor);
	std::string getNome();
	std::string getSobrenome();
	float getValor();
	void setAumento();
	
	//setSome(std::string);
	
	private:
	std::string nome;
	std::string sobrenome;
	float valor;
	
	
	

	
};

#endif


//g++ main.cpp Empregado.cpp -o a.exe