#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente
{
    public:
        ContaEspecial();
        ContaEspecial(double salario, Conta conta);
        double definirLimite();
};

#endif // CONTAESPECIAL_H
