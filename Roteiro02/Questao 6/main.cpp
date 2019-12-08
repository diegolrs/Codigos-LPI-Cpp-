#include <iostream>
#include "Voo.h"
#include <iomanip>
#include <ctime>

//g++ Voo.cpp main.cpp -o teste.exe

using namespace std;

int main(){
	std::string hora, data;
	
	
		cout<<" Digite o horario: ";
		cin>>hora;
		cout<<" Digite a data: ";
		cin>>data;
		
		Voo *sistema = new Voo(hora, data);
		
	int cadeira;
	
	while(1){	
		cout<<"\nDeseja ocupar qual cadeira? ";
		cin>>cadeira;
		sistema->ocupa(cadeira);
		
		sistema->proximoLivre();
	}
	
	
	return 0;
}