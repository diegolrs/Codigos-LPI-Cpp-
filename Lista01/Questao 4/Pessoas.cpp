#include <iostream>
#include "Pessoas.h"

Pessoas::Pessoas( int idade, int telefone){
		
		this->idade = idade;
		this->telefone = telefone;
}

Nome::Nome(std::string nome){
	this->nome = nome;
}


std::string Nome::getNome(){
	return nome;
}

void Nome::setNome(std::string nome){
	this->nome = nome;
}

//***************************************

int Pessoas::getIdade(){
	return idade;
}

int Pessoas::getTelefone(){
	return telefone;
}



void Pessoas::setIdade(int idade){
	this->idade = idade;
}

void Pessoas::setTelefone(int telefone){
	this->telefone = telefone;
}