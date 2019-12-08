#include <iostream>
#include "data.h"
#include <iomanip>

int main(){
	int d, m, a;
	
	while(1){
	std::cout<< "Insira o dia de hoje " <<std::endl;
	std::cin>> d;
	
	if(d <= 31 && d>0)
		break;
	
	std::cout<< "Dia invalido! \n" <<std::endl;
	
	}
	
	while(1){
	std::cout<< "Insira o mes atual " <<std::endl;
	std::cin>> m;
	
	if(m <= 12 && m>0)
		break;
	
	std::cout<< "Mes invalido! \n" <<std::endl;	
	
	}
	
	
	std::cout<< "Insira o ano atual " <<std::endl;
	std::cin>> a;
	
	
	Data *hoje = new Data(d, m, a);
	int check;
	
while(1){
	
	std::cout<<" O que deseja fazer? \n" <<std::endl;
	std::cout<<" 1-AVANCAR DIA \n 2-SAIR \n " <<std::endl;
	
	std::cin>>check;
	
	if(check == 1){
	hoje->avancarDia();	
	std::cout<<" Dia atual: ";
	std::cout<< std::setfill('0') << std::setw(2) << hoje->dia ;
	std::cout<< "/" ;
	std::cout<< std::setfill('0') << std::setw(2)<< hoje->mes ;
	std::cout<< "/" ;
	std::cout<< std::setfill('0') << std::setw(4)<< hoje->ano;
	std::cout<< "\n" << std::endl;
	}
	
	if(check ==2)
		return 0;	
}

	
return 0;	
}

//g++ main.cpp data.cpp -o a.exe