#include <iostream>
#include "Pessoas.h"

int main (){
	
		std::string nm;
		int tel, id;
		
		std::cout<< "Insira um nome: "<<std::endl;
		std::cin>>nm;
		std::cout<< "Insira sua idade: "<<std::endl;
		std::cin>>id;
		std::cout<< "Insira seu telefone: "<<std::endl;
		std::cin>>tel;
		
		Pessoas *numeros = new Pessoas(id, tel);
		Nome *nome = new Nome(nm);
		
		std::cout<< "Nome: "<< nome->getNome() <<" ";
		std::cout<< "Idade: "<< numeros->getIdade() <<" " << "Telefone: "<< numeros->getTelefone() <<" ";
	
		return 0;
}