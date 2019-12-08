#include "data.h"

//Métodos

Data::Data(int dia, int mes, int ano){
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}

void Data::avancarDia(){
	
	//Ano bissexto, fevereiro tem 29 dias
	if(mes==2){
		if(ano%4 == 0 && ano%100 != 0 ){
			if(dia <= 28){
				dia++;
			}
			else{
				dia = 1;
				mes++;
			if(mes > 12){
				mes = 1;
				ano++;}
			}	
		}else{
			
			if(dia <= 27){
				dia++;
			}
			else{
				dia = 1;
			if(mes > 12){
				mes = 1;
			ano++;}
			
			}				
		}
		//30 dias
	}else if (mes==04 || mes==6|| mes==9 || mes == 11) {
		
		if(dia<=29)
			dia++;
		else{
			dia = 1;
			mes++;
			if(mes > 12){
				mes = 1;
			ano++;}
			}
		}	
	else{
		
		if(dia<=30)
			dia++;
		else{
			dia = 1;
			mes++;
			if(mes > 12) {
				mes = 1;
			ano ++;}
			}
		}		
		
		
	}
	
	
	
