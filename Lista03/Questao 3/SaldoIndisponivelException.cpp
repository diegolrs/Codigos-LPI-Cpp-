#include "SaldoIndisponivelException.h"

SaldoIndisponivelException::SaldoIndisponivelException()
{
    //ctor
}

std::string SaldoIndisponivelException::getMsgErro(){
    return msgErro;
}
