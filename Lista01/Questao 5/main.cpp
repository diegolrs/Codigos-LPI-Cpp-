#include <iostream>
#include "gastos.h"

int main()
{
    int x,i;
    string a;
    double val;


    cout<<"\n Quantas despesas quer adicionar? ";
    cin>>x;
    Despesa *var = new Despesa[x];

    for(i=0; i<x; i++)
    {
        cout<<"\n Qual o nome da despesa? ";
        cin>>a;
        cout<<"\n Qual o valor?";
        cin>>val;
        cout<<"\n";
        var[i].setDespesa(a, val);

    }

    double total=0.0;

    for(i=0; i<x; i++)
    {

        cout<< " Despesa: " << var[i].getDespesaTipo() << " ";
        cout<<" Valor: "<< var[i].getDespesaValor() << "\n";
        total+= var[i].getDespesaValor();

    }

    while(1){
        double totalVar = 0;
        int check;
        cout<<" Procura por uma despesa especifica? (1- sim, 2- nao)";
        cin>>check;
        if(check==1)
        {
            cout<<"\n Digite o nome: ";
            string verifica;
            cin>>verifica;

            for(i=0; i<x; i++)
            {
                if(verifica == var[i].getDespesaTipo() )
                    {
                        totalVar+= var[i].getDespesaValor();
                cout<<totalVar;
                    }
            }

            cout<<"\n Despesa total de " << verifica<< " : " << totalVar<< "\n";
            totalVar = 0;
            i = 0;

        }else{
            break;
        }
    }

    cout<<"\n Despesa geral: "<< total;

    return 0;
}
