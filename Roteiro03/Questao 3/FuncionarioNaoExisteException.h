#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <string>

class FuncionarioNaoExisteException : public std::exception
{
    public:
        FuncionarioNaoExisteException();
        std::string getMsgErro();

    private:
        std::string msgErro = "\nFuncionario nao existe! \n";
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
