#ifndef SALDOINDISPONIVELEXCEPTION_H
#define SALDOINDISPONIVELEXCEPTION_H
#include <iostream>
#include <string>

class SaldoIndisponivelException : public std::exception
{
    public:
        SaldoIndisponivelException();
        std::string getMsgErro();

    private:
        std::string msgErro = "\nSaldo Indisponivel! \n";
};

#endif // SALDOINDISPONIVEL_H
