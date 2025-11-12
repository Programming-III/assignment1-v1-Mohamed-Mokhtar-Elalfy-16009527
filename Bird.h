#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

//define class bird here 

class Bird:public Animal{
private:
    float wingspan;
public:
    Bird();
    ~Bird();
    Bird(string name,int age,bool isHungry,float wingspan);
    float getwingspan();
    void setwingspan(float r);
};





#endif
