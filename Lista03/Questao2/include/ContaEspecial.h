#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "ContaEspecial.h"
#include "Conta.h"
#include "IConta.h"

class ContaEspecial : public Conta
{
    public:
    ContaEspecial(Conta conta);
    void definirLimite();

};

#endif // CONTAESPECIAL_H
