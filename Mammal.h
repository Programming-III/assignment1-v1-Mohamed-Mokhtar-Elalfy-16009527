#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

//define mammal class here

class Mammal:public Animal{
private:
    string furColor;
public:
    Mammal();
    ~Mammal();
    Mammal(string name,int age,bool isHungry,string furColor);
    string getfurColor();
    void setfurColor(string r);
};




#endif
