#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"
#include <vector>
#include <iostream>

class SistemaGerenciaFolha: public Funcionario
{
    public:
        SistemaGerenciaFolha();

        void setFuncionario(Assalariado funcionario);
        void setFuncionario(Horista vetor);
        void setFuncionario(Comissionado vetor);
        void setOrcamento(double entrada);

        void estourouOrcamento();
        double getOrcamento();
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario(std::string entrada);


    private:
        std::vector<Assalariado> assalariado;
        std::vector<Horista> horista;
        std::vector<Comissionado> comissionado;
        double orcamento;
};

#endif // SISTEMAGERENCIAFOLHA_H
