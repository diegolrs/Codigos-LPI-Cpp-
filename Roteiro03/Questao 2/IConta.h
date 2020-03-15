#pragma once

class IConta
{
    public:
        IConta();
        IConta(double valorInicial);
        virtual void sacar(double valor);
        virtual void depositar(double valor);
        void setValorNoBanco(double entrada);
        double getValorNoBanco();

    private:
        double valorNoBanco;

};


