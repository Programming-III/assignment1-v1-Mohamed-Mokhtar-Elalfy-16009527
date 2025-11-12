#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;
 Animal::~Animal(){}
  Animal::Animal(){}
  Animal::Animal(string name,int age,bool isHungry){
      this->name=name;
      this->age=age;
      this->isHungry=isHungry
  }
  virtual void Animal::display(){
      cout<<"name "<<name<<endl;
      cout<<"age "<<age<<endl;
      cout<<"is Hungry "<<endl;
  }
 void Animal::feed(){
     if(Animal::isHungry){
        cout<<"hungry"<<endl;;
        
     }
     else{
        cout<<"Not hungry"<<endl
     }
 }
 string Animal::getname(){
     return Animal::getname();
 }
 int Animal::getage(){
     return Animal::getage();
 }
 bool Aniaml::getisHungry(){
     return Animal::getisHungry()
 }
    
    
    
Mammal::Mammal(){
}
Mammal::~Mammal(){
}
Mammal::Mammal(string name,int age,bool isHungry,string furColor):Animal(name,age,isHungry){
    this->furColor=furColor;
    
}
Bird::Bird(){
}
Bird::~Bird(){
}
Bird::Bird(string name,int age,bool isHungry,float wingspan):Animal(name,age,isHungry){
    this->wingspan=wingspan;
}
Reptile::Reptile(){
}
Reptile::~Reptile{
    
}
Reptile::Reptile(string name,int age,bool isHungry,bool isvenomous):Animal(name,age,isHungry){
this->isvenomous=isvenomous;

}
Enclosure::Enclosure(){
}
Enclosure::~Enclosure(){
    delete[]animals;
}
Enclosure::Enclosure(int capacity){
    animals=new Aniaml[capacity];
    this->currentcount=0;
}
void Enclosure::addAnimal(Animal* a){
if(Enclosure::currentcount>=Enclosure::capacity){
    cout<<"full";
}
    else{
        Enclosure::animals[currentcount];
        currentcount++;
    }



}
Visitor::Visitor(){
}
Visitor::~Visitor(){
}
Visitor::Visitor(string visitorname,int ticketsbought){
    this->visitorname=visitorname;
    this->ticketbought=ticketbought;
    
    
}
int main() {
    Animal a1(Mamoth,20,true);
    Enclosure e1(20);
    
    return 0;
}

// ============== MAIN FUNCTION ==============int main() {
    
    

