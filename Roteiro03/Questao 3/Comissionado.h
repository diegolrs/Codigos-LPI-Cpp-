#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"

class Comissionado: public Funcionario
{
    public:
        Comissionado();
        Comissionado(double salario, double vendaSemanais, double percentualComissao, Funcionario funcionario);
        double calcularSalario();

        double getSalario();
        double getVendaSemanais();
        double getPercentualComissao();
        void setSalario(double entrada);
        void setVendaSemanais(double entrada);
        void setPercentualComissao(double entrada);

    private:
        double salario;
        double vendaSemanais;
        double percentualComissao;
};

#endif // COMISSIONADO_H
