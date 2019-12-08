#include "Empregado.h"

Empregado::Empregado(std::string nome, std::string sobrenome, float valor){
this->nome = nome;
this->sobrenome = sobrenome;
this->valor = valor;
}

std::string Empregado::getNome(){
	return nome;
}

std::string Empregado::getSobrenome(){
	return sobrenome;
}
float Empregado::getValor(){
	return valor;
}

void Empregado::setAumento(){
	valor = (valor * 110) / 100;
	Empregado::getValor();
	
}