#include "Funcionario.h"

Funcionario::Funcionario()
{
    setNome("");
    setMatricula(0);
}

Funcionario::Funcionario(std::string nome, int matricula)
{
    setNome(nome);
    setMatricula(matricula);
}

void Funcionario::setFuncionario(Funcionario funcionario){
    setNome(funcionario.nome);
    setMatricula(funcionario.matricula);
}

double Funcionario::calculaSalario(){

}

std::string Funcionario::getNome(){
    return nome;
}

int Funcionario::getMatricula(){
    return matricula;
}

void Funcionario::setNome(std::string entrada){
    nome = entrada;
}

void Funcionario::setMatricula(int entrada){
    matricula = entrada;
}








