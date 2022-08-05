#include <iostream>

using namespace std ;




class Employee {
public:
    string company ;
    int age ;
    int salary ; 



};


class Human {

public:
    string Name ;


    void printInfo () {

        cout << "Name - " << Name << endl;
    }
} ;


class Assistant : public Employee ,public Human{
public:
int id ;
string des ;

};





int main () {
  
Employee employee1;


Assistant a1 ;

a1.Name = "ALEX";
a1.printInfo();

// employee1.printInfo();


return 0;
} 

