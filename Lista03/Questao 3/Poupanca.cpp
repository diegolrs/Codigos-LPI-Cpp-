#include "Poupanca.h"

Poupanca::Poupanca()
{
    this->setVariacao(0);
    this->setTaxaRendimento(0);
    Conta("", 0, 0);
}

Poupanca::Poupanca(int variacao, double taxa, Conta conta){
    this->setVariacao(variacao);
    this->setTaxaRendimento(taxa);
    this->setConta(conta);
}

int Poupanca::getVaricao(){
    return variacao;
}

double Poupanca::getTaxaRendimento(){
    return taxaRendimento;
}

void Poupanca::setVariacao(int entrada){
    variacao = entrada;
}

void Poupanca::setTaxaRendimento(double entrada){
    taxaRendimento = entrada;
}

double Poupanca::render(){
  if(getVaricao() == 51){
    setTaxaRendimento( getTaxaRendimento() + 0.5);
  }

  double novoValor = (getSaldo() * (100 + getTaxaRendimento()) )  / 100;
  setSaldo(novoValor);

  return getSaldo();
}







