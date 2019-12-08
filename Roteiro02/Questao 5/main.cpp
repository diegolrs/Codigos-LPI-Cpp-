#include <iostream>
#include "Horario.h"
#include <iomanip>
#include <ctime>

using namespace std;

int main(){
	
	int validar;
	Horario *relogio = new Horario(23, 59, 50);
	
	while(1){
		cout<< setfill('0') << setw(2) << relogio->getData().hora << ":"; 
		cout<< setfill('0') << setw(2) << relogio->getData().minuto << ":"; 
		cout<< setfill('0') << setw(2) << relogio->getData().segundo<<endl; 
		
		cout<< "\n 1 - Avancar segundo\n 2 - Sair "<<endl; 
		cin>>validar;
		
		if(validar == 1){
			relogio->setSegundo(relogio->getData().segundo + 1);
			relogio->setMinuto(relogio->getData().minuto);
			relogio->setHora(relogio->getData().hora);
		}
		else if(validar == 2)
			return 0;
		
	}
	
	return 0;
} 
