#include "FuncionarioNaoExisteException.h"

FuncionarioNaoExisteException::FuncionarioNaoExisteException()
{
    //ctor
}

std::string FuncionarioNaoExisteException::getMsgErro(){
    return msgErro;
}
