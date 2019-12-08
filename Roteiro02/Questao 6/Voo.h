#ifndef _VOO_H_

#include <string>

class Voo{
	public:
		void proximoLivre();
		bool verifica(int numCadeira);
		void ocupa(int numCadeira);
		int getNumVoo();
		std::string getData();
		std::string getHorario();
		Voo(std::string data, std::string hora);

	private:
		std::string data;
		std::string hora;
		int cadeira[101];
};

#endif //_HORARIO_H_