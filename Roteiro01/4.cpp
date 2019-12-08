#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

void votos(int contador, int ar[]){
setlocale(LC_ALL, "Portuguese");

std::cout<< " Resultado da votação: \n\n";

int maiorPorcentagem, maisVotos, numero;

if(contador == 1)
std::cout<< " Foi computado "<< contador<< " voto.\n\n";
else
std::cout<< " Foram computados "<< contador<< " votos.\n\n";

for(int i=0; i<=23; i++){
if((ar[i] * 100) / contador != 0)
std::cout<< " Jogador "<< i<< " - Votos totais: "<< ar[i]<< ", Porcentagem: "<< (ar[i] * 100) / contador << "\n";
}
maisVotos = 0;

for(int i=0; i<=23; i++){
if(ar[i] > maisVotos){
    maisVotos = ar[i];
    maiorPorcentagem = (ar[i] * 100) / contador;
    numero = i;
    }
}

std::cout<< "\n O melhor jogador foi o número "<< numero<< ", com " << maisVotos << " votos, correspondendo a \n "<< maiorPorcentagem << "% do total de votos.\n";

}

int main(){
setlocale(LC_ALL, "Portuguese");
int x=-1, ar[23] = {0};

int num, contador = 0;

std::cout<<"\n";
while(x!=0){
    std::cout<<" Insira o número do jogador (0=fim): ";
    std::cin>>x;

    if(x > 23 || x < 0){
        std::cout<<" Número Inválido! \n";
    }else
    if(x==0)
        break;
    else
    {
      ar[x]++;
      contador++;
      }
}

std::cout<< "\n";

if(contador!=0)
votos(contador, ar);



return 0;
}
