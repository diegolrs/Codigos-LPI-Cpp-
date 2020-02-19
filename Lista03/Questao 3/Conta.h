#ifndef CONTA_H
#define CONTA_H
#include <string>

class Conta
{
    public:
        Conta();
        Conta(std::string nome, double saldo ,int numero);

        std::string getNomeCliente();
        int getNumero();
        double getSaldo();

        void setSaldo(double entrada);
        void setNumero(int entrada);
        void setNomeCliente(std::string entrada);
        void setConta(Conta conta);

        void sacar(double entrada);
        void depositar(double entrada);

    protected:
        std::string nomeCliente;
        int numero;
        double saldo;

};

#endif // CONTA_H
