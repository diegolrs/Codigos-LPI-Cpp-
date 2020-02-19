#include "Conta.h"
#include "SaldoIndisponivelException.h"
#include <iostream>

Conta::Conta()
{
    this->setNomeCliente("");
    this->setSaldo(0);
    this->setNumero(0);
}

Conta::Conta(std::string nomeCliente, double saldo ,int numero)
{
    setNomeCliente(nomeCliente);
    setSaldo(saldo);
    setNumero(numero);
}

std::string Conta::getNomeCliente(){
    return nomeCliente;
}

int Conta::getNumero(){
    return numero;
}

double Conta::getSaldo(){
    return saldo;
}

void Conta::setSaldo(double entrada){
    saldo = entrada;
}

void Conta::setNumero(int entrada){
    numero = entrada;
}

void Conta::setNomeCliente(std::string entrada){
    nomeCliente = entrada;
}

void Conta::setConta(Conta conta){

    this->setNomeCliente(conta.nomeCliente);
    this->setSaldo(conta.saldo);
    this->setNumero(conta.numero);
}

void Conta::sacar(double entrada){
    bool saldoIndisponivel = entrada > saldo;

    if(saldoIndisponivel){
        SaldoIndisponivelException saldoNegativo = SaldoIndisponivelException();
        throw saldoNegativo;
    }
    else
        setSaldo(saldo - entrada);

}

void Conta::depositar(double entrada){
    setSaldo(saldo + entrada);
}







