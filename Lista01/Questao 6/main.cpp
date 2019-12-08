#include <iostream>
#include "Funcionarios.h"

int main()
{
    int x,i;
    string a;
    double val;


    cout<<"\n Quantas Funcionarios quer adicionar? ";
    cin>>x;
    Funcionario *var = new Funcionario[x];

    for(i=0; i<x; i++)
    {
        cout<<"\n Qual o nome do Funcionario? ";
        cin>>a;
        cout<<"\n Qual o salario?";
        cin>>val;
        cout<<"\n";
        var[i].setFuncionario(a, val);

    }

    double total=0.0;

    for(i=0; i<x; i++)
    {

        cout<< " Funcionario: " << var[i].getFuncionarioTipo() << " ";
        cout<<" Salario: "<< var[i].getFuncionarioValor() << "\n";
        total+= var[i].getFuncionarioValor();

    }

    while(1){
        double totalVar = 0;
        int check;
        cout<<" Procura por uma Funcionario especifico? (1- sim, 2- nao)";
        cin>>check;
        if(check==1)
        {
            cout<<"\n Digite o nome: ";
            string verifica;
            cin>>verifica;

            for(i=0; i<x; i++)
            {
                if(verifica == var[i].getFuncionarioTipo() )
                    {
                        totalVar+= var[i].getFuncionarioValor();
                cout<<totalVar;
                    }
            }

            cout<<"\n Salario de " << verifica<< " : " << totalVar<< "\n";
            totalVar = 0;
            i = 0;

        }else{
            break;
        }
    }

    cout<<"\n Funcionario geral: "<< total;

    return 0;
}
