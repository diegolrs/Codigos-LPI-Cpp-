#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{
    IConta obj(500);
    cout<< obj.getValorNoBanco()<<endl;
    obj.sacar(100);
    cout<< obj.getValorNoBanco()<<endl;
    obj.depositar(200);
    cout<< obj.getValorNoBanco()<<endl;
    obj.sacar(1000);
    cout<< obj.getValorNoBanco()<<endl;

    //Conta(std::string nomeCliente, int numeroConta, double saldo, double salarioMensal);
    Conta obj2("Darcy", 155, 600, 1800);
    Conta obj3("Darcy", 155, 600, 1800);

    ContaEspecial obj4(obj3);

    cout<< "Nome: "<< obj2.getNomeCliente()<<endl;
    cout<< "N conta: "<<obj2.getNumeroConta()<<endl;
    cout<< "Saldo: "<<obj2.getSaldo()<<endl;
    cout<< "Salario Mensal: "<<obj2.getSalarioMensal()<<endl;
    cout<< "Limite: "<<obj2.getLimite()<<endl;

    return 0;
}
