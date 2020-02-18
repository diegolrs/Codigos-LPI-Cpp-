#include <iostream>
#include "Animal.h"
#include "Gato.h"
#include "Cachorro.h"

/*
Na programa��o orientada a objetos,
o polimorfismo permite qualidade ou estado de ser capaz
de assumir diferentes formas para o mesmo m�todo.

*/
using namespace std;

int main()
{
    Animal animal;
    cout<<animal.fazerRuido()<<endl;
    Gato gato;
    cout<<gato.fazerRuido()<<endl;
    Cachorro cachorro;
    cout<<cachorro.fazerRuido()<<endl;
    return 0;
}
