#include "Horista.h"

Horista::Horista()
{
    //ctor
}

Horista::Horista(double salario, double horasTrabalhadas, Funcionario funcionario)
{
    setSalario(salario);
    setFuncionario(funcionario);
    setHorasTrabalhadas(horasTrabalhadas);
}

double Horista::getSalario(){
    return salario;
}

double Horista::getHorasTrabalhadas(){
    return horasTrabalhadas;
}


void Horista::setHorasTrabalhadas(double entrada){
    horasTrabalhadas  = entrada;
}

void Horista::setSalario(double entrada){
    salario = entrada;
}

double Horista::calcularSalario(){
    if(horasTrabalhadas > 40)
        return (salario + ( (horasTrabalhadas-40) * 1.5) );
    else
    return salario;
}
