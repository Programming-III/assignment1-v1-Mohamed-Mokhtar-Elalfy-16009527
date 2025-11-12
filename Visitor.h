#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here
class Visitor{
private:
    string visitorname;
    int ticketsbought;
    
public:
    Visitor();
    ~Visitor();
    Visitor(string visitorname,int ticketsbought);
    void displayInfo();
    string getvisitorname();
    int getticketsbought();
};






#endif
