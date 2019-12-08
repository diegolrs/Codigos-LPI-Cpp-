#include <iostream>
#include "gastos.h"

using namespace std;

void Despesa::setDespesa(string tipo, double valor)
{
    this->valor = valor;
    this->tipo = tipo;
}

string Despesa::getDespesaTipo()
{
    return tipo;
}

double Despesa::getDespesaValor()
{
    return valor;
}


