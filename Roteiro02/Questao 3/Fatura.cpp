#include "Fatura.h"

Invoice::Invoice(int num, int quant, std::string desc, float pre){
numero = num;
quantidade = quant;
descricao = desc;
preco = pre;
}

//---------SET----------------------
void Invoice::setNumero(int n){
numero = n;
}

void Invoice::setQuant(int n){
quantidade = n;
}

void Invoice::setDescricao(std::string d ){
descricao = d;
}

void Invoice::setPreco(float n){
preco = n;
}

//---------------- GET -------------------------
int Invoice::getNumero(){
	return numero;
}

int Invoice::getQuantidade(){
	return quantidade;
}

std::string Invoice::getDescricao(){
	return descricao;
}

float Invoice::getPreco(){
	return preco;
}
