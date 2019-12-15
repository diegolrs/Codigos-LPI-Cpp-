//g++ Endereco.cpp main.cpp -o a

#include <string>
#include <iostream>
#include "Pessoa.h"

using namespace std;
int main(){


	Endereco end1 = Endereco(150, "Rua dos bobos", "No Place", "JP", "PB", "000-00");
    Pessoa n1 =  Pessoa("Joovis", "974", end1);
    Endereco end2 = Endereco(151, "Rua dos Escoteiros", "Mangabeira", "JP", "PB", "8758-32");
    Pessoa n2 =  Pessoa("Mario", "985", end2);

	//n1.setEnd(end1);


	/*cout << "Nome: "<< n1.getNome()<< ", ";
    cout <<n1.getEnd();
    cout<< ", Telefone: "<< n1.getTelefone() << endl;*/

    cout<<n1.ListAll();
    cout<<n2.ListAll();

	return 0;
}




