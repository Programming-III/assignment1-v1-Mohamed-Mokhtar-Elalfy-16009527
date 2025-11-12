#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here



class Reptile:public Animal{
private:
    bool isvenomous;
public:
    Reptile();
    ~Reptile();
    Reptile(string name,int age,bool isHungry,bool isvenomous);
    bool getisvenomous();
    void setisvenomous(bool r);
};





#endif
