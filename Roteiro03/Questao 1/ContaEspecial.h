#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "ContaEspecial.h"
#include "Conta.h"


class ContaEspecial : public Conta
{
    public:
    ContaEspecial(Conta conta);
    ContaEspecial();
    void definirLimite();
};

#endif // CONTAESPECIAL_H
