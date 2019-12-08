#include <iostream>
#include "Funcionarios.h"

using namespace std;

void Funcionario::setFuncionario(string tipo, double valor)
{
    this->valor = valor;
    this->tipo = tipo;
}

string Funcionario::getFuncionarioTipo()
{
    return tipo;
}

double Funcionario::getFuncionarioValor()
{
    return valor;
}


