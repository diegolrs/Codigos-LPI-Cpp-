#ifndef CACHORRO_H
#define CACHORRO_H
#include "Animal.h"
#include <string>

class Cachorro : public Animal
{
    public:
        Cachorro();
        std::string fazerRuido();

};

#endif // CACHORRO_H
