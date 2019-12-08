#include <iostream>
#include "Fatura.h"
#include <string>
#include <cstring>

int main(){

int num, quant, cont=1;
std::string descr;
float valor, total = 0, totalLocal = 0;

Invoice *produto = new Invoice(num, quant, descr, valor);

while(1){
    std::cout<< "\nITEM NUMERO " << cont << " -------------\n" << std::endl;
    num = cont;
    std::cout<< "Insira a quantidade " <<std::endl;
    std::cin>> quant;

    if(quant <= 0)
        quant = 0;

    std::cout<< "Insira a descricao " <<std::endl;
    std::cin.ignore();
    std::getline( std::cin, descr);

    std::cout<< "Insira o valor " <<std::endl;
    std::cin>> valor;

    if(valor<=0)
        valor = 0.0;

    produto->setNumero(num);
    produto->setQuant(quant);
    produto->setPreco(valor);
    produto->setDescricao(descr);

    total = total + (1.0 * produto->getQuantidade() ) * produto->getPreco() ;
    totalLocal = (1.0 * produto->getQuantidade() ) * produto->getPreco() ;

    std::cout << "\nNumero: "<< produto->getNumero() <<std::endl;
    std::cout << "Preco: "<< produto->getPreco() <<std::endl;
    std::cout << "Quantidade: "<< produto->getQuantidade() <<std::endl;
    std::cout << "Descricao: "<< produto->getDescricao() <<std::endl;
    std::cout << "Total: "<< totalLocal <<std::endl;

    int check;

    std::cout << "\nContinuar (1)" <<std::endl;
    std::cout << "Sair (2)" <<std::endl;

    std::cin>> check;

    if(check==2)
        break;

    cont++;

}

std::cout << "\nTotal Geral: "<< total <<std::endl;

return 0;
}
