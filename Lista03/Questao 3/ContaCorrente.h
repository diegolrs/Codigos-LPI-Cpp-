#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.h"
#include <iostream>

class ContaCorrente : public Conta
{
    public:
        ContaCorrente();
        ContaCorrente(double salario, Conta conta);
        double getLimite();
        double getSalario();
        void setLimite(double entrada);
        void setSalario(double entrada);

    protected:
        virtual double definirLimite();

    private:
        double salario;
        double limite;
};

#endif // CONTACORRENTE_H
