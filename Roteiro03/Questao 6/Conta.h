#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <string>

class Conta : public IConta {

    public:
        Conta();
        Conta(std::string nomeCliente, int numeroConta, double saldo, double salarioMensal);
        std::string getNomeCliente();
        int getNumeroConta();
        double getSaldo();
        double getLimite();
        double getSalarioMensal();

        void setNomeCliente(std::string entrada);
        void setNumeroConta(int entrada);
        void setSaldo(double entrada);
        void setSalarioMensal(double entrada);
        void setLimite(double entrada);
        void setConta(Conta conta);

        virtual void definirLimite();

    private:
        std::string nomeCliente;
        int numeroConta;
        double saldo, limite, salarioMensal;


};




#endif // CONTA_H
