#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 
class Animal{
private:
    string name;
    int age;
    bool isHungry;
public :
    Animal();
     ~Animal();
     Animal(string name,int age,bool isHungry);
     virtual void display();
     void feed();
     string getname();
    int getage();
    bool getisHungry();
     void setname(string r);
    void setage(int x);
    void setisHungry(bool y);
};

#endif
