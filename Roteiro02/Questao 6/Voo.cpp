#include <iostream>
#include "Voo.h"

void Voo::proximoLivre(){
	int i;
	for(i=1; i<=100; i++){
			if(cadeira[i] == 0){
				std::cout<<"Proxima cadeira livre: " << i <<std::endl;;
				break;
			}
	}
}

bool Voo::verifica(int numCadeira){
	if(numCadeira>=101){
		std::cout<<"Cadeira nao existente!"<<std::endl;
		return 0;
	}
	if( this->cadeira[numCadeira] == 1){
		std::cout<<"Cadeira ocupada!"<<std::endl;
		return 0;
	}else
		return 1;
}

void Voo::ocupa(int numCadeira){
	if( verifica(numCadeira) )
		this->cadeira[numCadeira] = 1;
}

Voo::Voo(std::string data, std::string hora){
	this->data = data;
	this->hora = hora;
	
	int i;
	for( i = 0; i<101; i++)
		this->cadeira[i] = 0;
		
}