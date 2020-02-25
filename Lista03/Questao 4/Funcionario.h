#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    public:
        Funcionario();
        Funcionario(std::string nome, int matricula);
        void setFuncionario(Funcionario funcionario);
        virtual double calculaSalario();
        std::string getNome();
        int getMatricula();
        void setNome(std::string entrada);
        void setMatricula(int matricula);

    private:
        std::string nome;
        int matricula;
};

#endif // FUNCIONARIO_H
