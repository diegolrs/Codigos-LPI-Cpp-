#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H
#include <string>

class OrcamentoEstouradoException  : public std::exception
{
    public:
        OrcamentoEstouradoException();
        std::string getMsgErro();
    private:
        std::string msgErro = "\nOrcamento estourado! \n";
};

#endif // ORCAMENTOESTOURADOEXCEPTION_H
