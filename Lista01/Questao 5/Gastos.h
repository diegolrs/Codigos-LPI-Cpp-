#ifndef _GASTOS_H_
#include <cstring>
using namespace std;

class Despesa{
public:
    void setDespesa(string tipo ,double valor);
    string getDespesaTipo();
    double getDespesaValor();
    void calculaTotalDespesa();


private:
    double valor;
    string tipo;
};

#endif // _GASTOS_H_
