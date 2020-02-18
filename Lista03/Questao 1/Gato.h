#ifndef GATO_H
#define GATO_H
#include "Animal.h"
#include <string>

class Gato : public Animal
{
    public:
        Gato();
        std::string fazerRuido();

};

#endif // GATO_H
