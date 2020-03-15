#include "Conta.h"
#include "IConta.h"
#include "SaldoNaoDisponivelException.h"

Conta::Conta(std::string nomeCliente, int numeroConta, double saldo, double salarioMensal)
{
        setNomeCliente(nomeCliente);
        setNumeroConta(numeroConta);
        setSaldo(saldo);
        setSalarioMensal(salarioMensal);
        definirLimite();
}

Conta::Conta()
{
        setNomeCliente("0");
        setNumeroConta(0);
        setSaldo(0);
        setSalarioMensal(0);
        definirLimite();
}

std::string Conta::getNomeCliente(){
    return nomeCliente;
}

int Conta::getNumeroConta(){
    return numeroConta;
}

double Conta::getSaldo(){
    return saldo;
}

double Conta::getLimite(){
    return limite;
}

double Conta::getSalarioMensal(){
    return salarioMensal;
}

void Conta::setNomeCliente(std::string entrada){
    nomeCliente = entrada;
}

void Conta::setNumeroConta(int entrada){
    numeroConta = entrada;
}

void Conta::setSaldo(double entrada){
    saldo = entrada;
}


void Conta::setSalarioMensal(double entrada){
    salarioMensal = entrada;
}

void Conta::definirLimite(){
    limite = getSalarioMensal() * 2;
}

void Conta::setLimite(double entrada){
    limite = entrada;
}

void Conta::setConta(Conta conta){
        this->setNomeCliente(conta.nomeCliente);
        this->setNumeroConta(conta.numeroConta);
        this->setSaldo(conta.saldo);
        this->setSalarioMensal(conta.salarioMensal);
        this->definirLimite();
}

void Conta::sacar(int valor){
	if(valor > getSaldo() )
	{
		SaldoNaoDisponivelException saldoNegativo;
		throw saldoNegativo;
	}
	else
		setSaldo(saldo - valor);
}
