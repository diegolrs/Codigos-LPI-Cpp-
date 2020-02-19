#include "ContaCorrente.h"

ContaCorrente::ContaCorrente()
{
    this->setSalario(0);
    this->definirLimite();
    Conta("", 0, 0);
}

ContaCorrente::ContaCorrente(double salario, Conta conta)
{
    this->setSalario(salario);
    this->definirLimite();
    this->setConta(conta);
}

double ContaCorrente::getLimite(){
    return this->limite;
}

double ContaCorrente::getSalario(){
    return salario;
}

void ContaCorrente::setLimite(double entrada){
    limite = entrada;
}

void ContaCorrente::setSalario(double entrada){
    salario = entrada;
}

double ContaCorrente::definirLimite(){
    setLimite(2 * this->getSalario() );
    return getLimite();
}


