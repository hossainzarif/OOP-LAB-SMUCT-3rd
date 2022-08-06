#include <iostream>

using namespace std ;
//LECTURE 3

// scope resolution operator DONE 
// multiple Inheritance DONE 
// Multilevel Inheritance  DONE  
// Protected  DONE 
// heirarchy inheritance DONE 

//LECTURE 4

//AMBIGUITY PROBLEM with inheritance
// Setter & GETTER 
// CONSTRUCTOR  

int x = 10 ;



class Employee {
public:
    string Designation ;
    int salary ; 

    // Employee ()
    // {
    //     cout << "Default Constructor is called - " << endl;

    // }
    // void printInfo () {

    //     cout << "Name - " << "PRINTING EMPLOYEE" << endl;
        
    // }

// Getter & Setter



private:
       string marritalStatus ; // Not inherited 
protected:
    int performanceBonus ;

public:
void setMarStatusBonus (string status, int bonus )
{
    marritalStatus = status;
    performanceBonus = bonus;

}


public:
    void printInfo () {

        cout << "Marital Status - " << marritalStatus<< endl;
        cout << "Performance  Bonus - " << performanceBonus<< endl;

        
    }
public:
    int getBonus ()
    {
        return performanceBonus;
    }


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


 
public:
    void printInfo () {

        cout << "Name - " << "PRINTING HUMAN" << endl;
        
    }


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


// Employee --> printInfo
// Human --> printInfo


// performanceBonus but Protected 

// Encapsulation & Abstraction (Getter & Setter Method)
public:
   void printInfo () {


    Human :: printInfo ();

    }



};


int main () {
  
Employee employee1;



// SET 
employee1.setMarStatusBonus("Married", 100);

employee1.printInfo();


//GET and manipulation 
int empBonus = employee1.getBonus()+100;

cout <<   empBonus+100 << endl;

// Set manipulated variable
employee1.setMarStatusBonus("Married", empBonus);
employee1.printInfo();




// employee1.printInfo(); 

// TAssistant ta;
// ta.printInfo();
// int x = 19;
// employee1.Designation;
//gloab changed

// cout << :: x << endl ;

// ta.name = "Hossain" ;
// ta.salary = 100000000;

// ta.printInfo();

// Human hum;

// hum.warmBlood;


// ta.printInfo();

return 0;
} 

