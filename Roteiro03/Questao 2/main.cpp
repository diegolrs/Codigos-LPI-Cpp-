#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include <string>

using namespace std;

int main()
{
    //Conta(std::string nomeCliente, int numeroConta, double saldo, double salarioMensal);
    Conta obj2("Darcy", 155, 600, 1800);
    Conta obj3("Ribeiro", 156, 800, 2000);

	try
	{
		obj2.sacar(1000);
		cout<<"\n--- Saque efetuado com sucesso ----\n";
	}
	catch(SaldoNaoDisponivelException saldoNegativo)
	{
		cout<<"\n--- "<< saldoNegativo.getMsgErro()<<"  ----\n";
	}

    ContaEspecial obj4(obj3);
	
	try
	{
		obj4.sacar(257);
		cout<<"\n--- Saque efetuado com sucesso ----\n";
	}
	catch(SaldoNaoDisponivelException saldoNegativo)
	{
		cout<<"\n--- "<< saldoNegativo.getMsgErro()<<"  ----\n";
	}
	
    cout<< "Nome: "<< obj2.getNomeCliente()<<endl;
    cout<< "N conta: "<<obj2.getNumeroConta()<<endl;
    cout<< "Saldo: "<<obj2.getSaldo()<<endl;
    cout<< "Salario Mensal: "<<obj2.getSalarioMensal()<<endl;
    cout<< "Limite: "<<obj2.getLimite()<<endl;
	
    cout<< "\nNome: "<< obj4.getNomeCliente()<<endl;
    cout<< "N conta: "<<obj4.getNumeroConta()<<endl;
    cout<< "Saldo: "<<obj4.getSaldo()<<endl;
    cout<< "Salario Mensal: "<<obj4.getSalarioMensal()<<endl;
    cout<< "Limite: "<<obj4.getLimite()<<endl;

    return 0;
}
