#include "Assalariado.h"

Assalariado::Assalariado()
{
    //ctor
}

Assalariado::Assalariado(double entrada, Funcionario funcionario)
{
    setSalario(entrada);
    setFuncionario(funcionario);
}

double Assalariado::getSalario(){
    return salario;
}

void Assalariado::setSalario(double entrada){
    salario = entrada;
}

double Assalariado::calcularSalario(){
    return salario;
}
