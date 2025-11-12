#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 


class Enclosure{
private:
    Animal* animals;
    int capacity;
    int currentcount;
public:
    Enclosure();
    ~Enclosure();
    Enclosure(int capacity);
    void addAnimal(Animal* a);
    void displayAnimal();
    
};





#endif
