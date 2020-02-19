#include <iostream>
#include "Conta.h"
#include "SaldoIndisponivelException.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;

int main()
{
    Conta *c1 = new Conta("Darcy", 500, 2);

    c1->setSaldo(100);
    cout<<c1->getSaldo();

    // Realizando Exceptions

    // Tenta sacar o valor
    try{
        c1->sacar(500);
        cout<<"Saque realizado com sucesso"<<endl;
    }
    // Pegar o throw caso a Exception seja requerida
    catch(SaldoIndisponivelException saldoNegativo){
        cout<< saldoNegativo.getMsgErro()<<endl;
    }

    ContaCorrente *c2 = new ContaCorrente(100,  *c1);
    ContaEspecial *c3 = new ContaEspecial(100, *c1);

    cout<<"\n\nSALARIO:" << c3->getSalario()<<endl;
    cout<<"Limite conta normal: " << c2->getLimite()<<endl;
    cout<<"Limite conta especial: " << c3->getLimite()<<endl;

    Poupanca *c4 = new Poupanca (1, 0.10, *c1);

    cout<<"Poupanca: "<< c4->render()<<endl;
    c4->setVariacao(51);
    cout<<"Poupanca: "<< c4->render()<<endl;




    return 0;
}

