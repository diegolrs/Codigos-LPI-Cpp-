#include <iostream>
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "SistemaGerenciaFolha.h"


using namespace std;

int main()
{
    Funcionario f1("Amanda", 1);
    Funcionario f2("Bruno", 2);
    Funcionario f3("Clara", 3);
    Funcionario f4("Daniel", 4);

    cout << "Nome:"<< f1.getNome() << endl;
    cout << "Matricula:"<< f1.getMatricula() << endl<< endl;

    Assalariado fA1(500, f2);
    cout << "Nome:"<< fA1.getNome() << endl;
    cout << "Matricula:"<< fA1.getMatricula() << endl;
    cout << "Salario: RS "<< fA1.getSalario() << endl<< endl;

    Horista fH1(700, 55, f3);
    cout << "Nome:"<< fH1.getNome() << endl;
    cout << "Matricula:"<< fH1.getMatricula() << endl;
    cout << "Salario: RS "<< fH1.calcularSalario() << endl<< endl;

    Comissionado fC1(600, 50, 0.5, f4);
    cout << "Nome:"<< fC1.getNome() << endl;
    cout << "Matricula:"<< fC1.getMatricula() << endl;
    cout << "Salario: RS "<< fC1.calcularSalario() << endl<< endl;

    SistemaGerenciaFolha admin;
    admin.setFuncionario(fC1);
    admin.setFuncionario(fH1);
    admin.setFuncionario(fA1);

    double orcamento;
    cout<< "\n\nDigite o orcamento total da empresa: ";
    cin>>orcamento;
    admin.setOrcamento(orcamento);

    cout << "Salario Total: RS "<< admin.calculaValorTotalFolha()<< endl;
    cout << "Orcamento: RS "<< admin.getOrcamento()<< endl;

    try{
        admin.estourouOrcamento();
    }
    catch(OrcamentoEstouradoException estourou){
        cout<< estourou.getMsgErro();
    }

while(1){
        cout<< "\n\nDigite o funcionario para buscar o salario(0 pra sair): ";
        string entrada;
        cin>>entrada;
        cout<< "\n";

        if(entrada == "0")
            return 0;

     try{
            admin.consultaSalarioFuncionario(entrada);
            cout<< "Salario de "<< entrada << " RS " << admin.consultaSalarioFuncionario(entrada);;
        }
        // Pegar o throw caso a Exception seja requerida
        catch(FuncionarioNaoExisteException naoExiste){
            cout<< naoExiste.getMsgErro()<<endl;
        }
}
    return 0;
}
