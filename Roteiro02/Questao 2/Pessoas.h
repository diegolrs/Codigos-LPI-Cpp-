#ifndef _PESSOAS_H
#include <string>

class Pessoas{
	public:
		int getIdade();
		int getTelefone();
		Pessoas(int idade, int telefone);
	
	
	void setIdade(int idade);
	void setTelefone(int telefone);
	
	private:
		int idade;
		int telefone;
};

class Nome{
	
	public:
		std::string getNome();
		Nome(std::string nome);
		void setNome(std::string nome);
		
	private:
		std::string nome;
};


#endif

//g++ main.cpp Pessoas.cpp -o a.exe