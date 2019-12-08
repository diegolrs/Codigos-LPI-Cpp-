#include "Empregado.h"
#include <iostream>

int main(){

std::string nm, sbnm;
float val;

std::cout<< "Insira o nome " <<std::endl;
std::cin>> nm;
std::cout<< "Insira o sobrenome " <<std::endl;
std::cin>> sbnm;
std::cout<< "Insira o valor " <<std::endl;
std::cin>> val;
if(val<0)
	val = 0;

Empregado *n1 = new Empregado(nm, sbnm, val);

std::cout << "Funcionario: "<< n1->getNome() << " " << n1->getSobrenome() << " Salario anual: "<< n1->getValor() *12<<std::endl;

std::cout<< "Insira o nome " <<std::endl;
std::cin>> nm;
std::cout<< "Insira o sobrenome " <<std::endl;
std::cin>> sbnm;
std::cout<< "Insira o valor " <<std::endl;
std::cin>> val;
if(val<0)
	val = 0;

Empregado *n2 = new Empregado(nm, sbnm, val);

std::cout <<  "Funcionario: "<< n2->getNome() << " " << n2->getSobrenome() << " Salario: "<< n2->getValor() *12<<std::endl;

std::cout <<  "\n Apos aumento de 10/100\n";
n1->setAumento();
std::cout << "Funcionario: "<< n1->getNome() << " " << n1->getSobrenome() << " Salario anual: "<< n1->getValor() *12<<std::endl;
n2->setAumento();
std::cout <<  "Funcionario: "<< n2->getNome() << " " << n2->getSobrenome() << " Salario anual: "<< n2->getValor() *12<<std::endl;


return 0;
}	
