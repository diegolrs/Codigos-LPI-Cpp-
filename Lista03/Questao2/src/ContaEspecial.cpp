#include "ContaEspecial.h"
#include "Conta.h"
#include "IConta.h"

void ContaEspecial::definirLimite(){
    this->setLimite(getSalarioMensal() * 3);
}

ContaEspecial::ContaEspecial(Conta conta){
        this->setNomeCliente(conta.nomeCliente);
        this->setNumeroConta(conta.numeroConta);
        this->setSaldo(conta.saldo);
        this->setSalarioMensal(conta.salarioMensal);
        //this->definirLimite();
}
