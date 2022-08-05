#include <iostream>

using namespace std ;

class Employee {
public:
    string Name ;
    string company ;
    int age ;
    int salary ; 


    void printInfo () {

        cout << "Name - " << Name << endl;
        
    }
};



int main () {
  
Employee employee1;

employee1.Name ="Hossain" ;

employee1.printInfo();


return 0;
} 

