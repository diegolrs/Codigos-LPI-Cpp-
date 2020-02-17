#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(Conta conta){
    this->setConta(conta);
}

ContaEspecial::ContaEspecial(){

}

void ContaEspecial::definirLimite(){
    this->setLimite(getSalarioMensal() * 3);
}

