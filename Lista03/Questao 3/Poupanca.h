#ifndef POUPANCA_H
#define POUPANCA_H
#include "Conta.h"

class Poupanca : public Conta
{
    public:
        Poupanca();
        Poupanca(int variacao, double taxa, Conta conta);
        int getVaricao();
        double getTaxaRendimento();
        void setVariacao(int entrada);
        void setTaxaRendimento(double entrada);
        double render();

    private:
        int variacao;
        double taxaRendimento;
};

#endif // POUPANCA_H
