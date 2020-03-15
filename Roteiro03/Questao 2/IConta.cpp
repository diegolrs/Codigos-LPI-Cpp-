#include "IConta.h"
#include <iostream>

IConta::IConta()
{
    setValorNoBanco(0);
}

IConta::IConta(double valorInicial)
{
    setValorNoBanco(valorInicial);
}

void IConta::sacar(double valor)
{
		setValorNoBanco(valorNoBanco - valor);
}

void IConta::depositar(double valor)
{
    setValorNoBanco(valorNoBanco + valor);
}

void IConta::setValorNoBanco(double entrada)
{
    valorNoBanco = entrada;

    if(entrada<0)
        valorNoBanco = 0;
}

double IConta::getValorNoBanco()
{
    return valorNoBanco ;
}
