#include <iostream>
#include "Animal.h"
#include "Gato.h"
#include "Cachorro.h"

/*
Na programação orientada a objetos,
o polimorfismo permite qualidade ou estado de ser capaz
de assumir diferentes formas para o mesmo método.

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
