#include "ContaEspecial.h"
#include <iostream>

ContaEspecial::ContaEspecial()
{
    ContaCorrente();
    //definirLimite();
}

ContaEspecial::ContaEspecial(double salario, Conta conta)
{
    this->setSalario(salario);
    this->definirLimite();
    this->setConta(conta);
}

double ContaEspecial::definirLimite(){
    std::cout<<"aa";
    std::cout<< getSalario();
    setLimite(4 * getSalario());
    return getLimite();
}
