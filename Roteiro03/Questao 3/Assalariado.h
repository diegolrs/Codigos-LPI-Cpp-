#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"

class Assalariado : public Funcionario
{
    public:
       Assalariado();
       Assalariado(double entrada, Funcionario funcionario);
       double getSalario();
       void setSalario(double entrada);

       double calcularSalario();

    private:
        double salario;
};

#endif // ASSALARIADO_H
