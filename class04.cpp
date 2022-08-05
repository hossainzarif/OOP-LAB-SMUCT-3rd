#include <iostream>

using namespace std ;

// scope resolution operator DONE 
// multiple Inheritance DONE 
// Multilevel Inheritance  DONE  AMBIGUITY PROBLEM
// Protected  DONE 
// heirarchy inheritance DONE 


// CONSTRUCTOR DESTRUCTOR 

int x = 10 ;



class Employee {
public:
    string Designation ;
    int salary ; 

private:
       string marritalStatus ; // Not inherited 

protected:
    int performanceBonus ;

};

// public everyone 
// private own 
// 



class Animal {

    public: 
        string name ;
        int age ;



};

class Mammal : public Animal {
    public:
        bool warmBlood; // True or False
    private:
       string scientificName ;

    private:
        bool endangered ; // True or False
    
};



// SOLID

class Human : public Mammal{


 

    // void printInfo () {

    //     cout << "Name - " << name << endl;
        
    // }


};


// ??????? Performancebonus


/*
   Base Class Members    public derivation    private derivation   protected derivation                   
1. private members         not inherited        not inherited           not inherited
2. protected members       protected              private                  protected
3. public members          public                  private                  protected


*/



// -- TAssistant -- Employee + Human 

// Multiple Inheritance 
class TAssistant : public Employee, public Human{



// performanceBonus but Protected 

// Encapsulation & Abstraction (Getter & Setter Method)




};


int main () {
  
Employee employee1;

// employee1.Name ="Hossain" ;

// employee1.printInfo(); 

TAssistant ta;

int x = 19;
// employee1.Designation;
:: x = 100 ; //gloab changed

cout << :: x << endl ;

// ta.name = "Hossain" ;
// ta.salary = 100000000;

// ta.printInfo();

Human hum;

hum.warmBlood;

return 0;
} 

