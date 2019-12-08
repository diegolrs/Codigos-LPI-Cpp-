#include <iostream>
#include "Horario.h"

Horario::Horario(){
	Padrao();
} 

Horario::Horario(int hora, int minuto, int segundo){
	if(hora>= 24 || minuto>=60 || segundo>=60)
		Padrao();
	else{
		setHora(hora);
		setMinuto(minuto);
		setSegundo(segundo);
	}
}

EstruturaData Horario::getData(){
	return data;
}

void Horario::setSegundo(int tempo){
	if(tempo >= 60){
		this->data.segundo = 0;
		this->data.minuto++;
	}
	else
		this->data.segundo = tempo;
}

void Horario::setMinuto(int tempo){
	if(tempo >= 60){
		this->data.minuto = 0;
		this->data.hora++;
	}
	else
		this->data.minuto = tempo;
}

void Horario::setHora(int tempo){
	if(tempo >= 24)
		this->data.hora = 0;
	else
		this->data.hora = tempo;
}

void Horario::Padrao(){
	this->data.hora = 0;
	this->data.minuto = 0;
	this->data.segundo = 0;
}
