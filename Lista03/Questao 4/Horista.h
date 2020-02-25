#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"

class Horista : public Funcionario
{
    public:
        Horista();
        Horista(double salario, double horasTrabalhadas, Funcionario funcionario);

        void setSalario(double entrada);
        void setHorasTrabalhadas(double entrada);

        double getSalario();
        double getHorasTrabalhadas();

        double calcularSalario();

    private:
        double salario;
        double horasTrabalhadas;


};

#endif // HORISTA_H
