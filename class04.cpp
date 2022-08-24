#include <iostream>

using namespace std ;
//LECTURE 3

// scope resolution operator DONE 
// multiple Inheritance DONE 
// Multilevel Inheritance  DONE  
// Protected  DONE 
// heirarchy inheritance DONE 

//LECTURE 4

//AMBIGUITY PROBLEM with inheritance DONE 
// Setter & GETTER  DONE 


//LECTURE 5
// CONSTRUCTOR  & Destructor 


  // Employee ( string name , string Designation, int salary)
    // {
    //     this-> name = name ;
    //     this->Designation = Designation;
    //     this->salary = salary;


    // }


    // Employee ( Employee & obj)
    // {
    //     this-> name = obj.name ;
    //     this->Designation = obj.Designation;
    //     this->salary = obj.salary;


    // }




int x = 10 ;

class Animal {

    public: 
        string name ;
        int age ;
};

class Mammal : public Animal {
       //name <---
    public:
        bool warmBlood; // True or False
    private:
       string scientificName ;

    private:
        bool endangered ; // True or False
};

class Human : public Mammal{

       //name <---

 

public:
    void printInfo () {

        cout << "Name - " << "PRINTING MAMMAL" << endl;
        
    }


};




class Employee: public Human {
           //name <---

public:
    string Designation ;
    int salary ; 

//Example of Default Constructor
    Employee ()
    {
       cout << "Default Constructor CALLED" << endl;
       name = "ALICE";
       Designation = "STUDENT";
       salary = 0;
    }

//This


Employee (string name, string Designation, int salary)
{
           cout << "Parameterized Constructor CALLED" << endl;

       this->name = name;
        this-> Designation = Designation;
       this-> salary = salary;
}


  Employee ( Employee & obj)
    {
     cout << "COPY Constructor CALLED" << endl;

        this-> name = obj.name ;
        this->Designation = obj.Designation;
        this->salary = obj.salary;


    }





    void printInfo () {

        cout << "Name   - " << name << endl;

        cout << "Designation  - " << Designation << endl;

        cout << "Salary  - " << salary << endl;

    }
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
    int getBonus ()
    {
        return performanceBonus;
    }


};

// public everyone 
// private own 
// 









// SOLID




// ??????? Performancebonus


/*
   Base Class Members    public derivation    private derivation   protected derivation                   
1. private members         not inherited        not inherited           not inherited
2. protected members       protected              private                  protected
3. public members          public                  private                  protected


*/



// -- TAssistant -- Employee + Human 

// Multiple Inheritance 
// class TAssistant : public Employee, public Human{


// // Employee --> printInfo
// // Human --> printInfo


// // performanceBonus but Protected 

// // Encapsulation & Abstraction (Getter & Setter Method)
// public:
//    void printInfo () {


//     Human :: printInfo ();

//     }



// };


int main () {
  
Employee employee1, employee2("MIKE", "LECTURER",130230), employee3("JANE","CA",31278373);


// employee1.printInfo();
// employee2.printInfo();
// employee3.printInfo();

// Employee employee4 = employee1; //Copy contructor calling
// employee4.printInfo();

// employee1.printInfo();


// // SET 
//employee1.setMarStatusBonus("Married", 100);


// employee1.printInfo();


// //GET and manipulation 
// int empBonus = employee1.getBonus()+100;

// cout <<   empBonus+100 << endl;

// // Set manipulated variable
// employee1.setMarStatusBonus("Married", empBonus);
// employee1.printInfo();




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






