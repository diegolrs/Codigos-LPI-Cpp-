#ifndef _FUNCIONARIOS_H_
#include <cstring>
using namespace std;

class Funcionario{
public:
    void setFuncionario(string tipo ,double valor);
    string getFuncionarioTipo();
    double getFuncionarioValor();
    void calculaTotalFuncionario();


private:
    double valor;
    string tipo;
};

#endif
