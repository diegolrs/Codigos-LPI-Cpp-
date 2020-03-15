#include "Comissionado.h"

Comissionado::Comissionado()
{
    //ctor
}

Comissionado::Comissionado(double salario, double vendaSemanais, double percentualComissao, Funcionario funcionario)
{
    setVendaSemanais(vendaSemanais);
    setPercentualComissao(percentualComissao);
    setSalario(salario);
    setFuncionario(funcionario);
}


double Comissionado::calcularSalario(){
    return (salario + (vendaSemanais) * percentualComissao);
}

double Comissionado::getVendaSemanais(){
    return vendaSemanais;
}

double Comissionado::getPercentualComissao(){
    return percentualComissao;
}

void Comissionado::setVendaSemanais(double entrada){
    vendaSemanais = entrada;
}

void Comissionado::setPercentualComissao(double entrada){
    percentualComissao = entrada;
}

double Comissionado::getSalario(){
    return salario;
}

void Comissionado::setSalario(double entrada){
    salario = entrada;
}
