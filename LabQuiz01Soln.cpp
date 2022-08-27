
#include <iostream>

using namespace std ;


class Department {
    public:
        string name ;

};

class Employee  {
protected: 
 string employee_id;
 string designation;
 string department_name;
 int abscentDays;
 int baseSalary;
 float allowance;
 float deduction ;
 float grossSalary;
  float netSalary;


public:
    void calculateGrossSalary(float allowance )

    {
        grossSalary = baseSalary +  (baseSalary* (allowance/100));

        cout << grossSalary << endl;
    }

};
class Student 
{

public: 
    string uuid;
    string name ;
    string department_name;
private:
    string keycode ;
}; 


class Lecturer: public Employee
{
public:
Lecturer(int baseSalary,int abscentDays)
{
 this-> baseSalary = baseSalary;
 this -> abscentDays = abscentDays ; 

}

};
class Professor: public Employee
{
public:
Professor(int baseSalary,int abscentDays)
{
     this-> baseSalary = baseSalary;
     this -> abscentDays = abscentDays ; 

}

};
class TA: public Employee, public Student
{


public:
 TA(int baseSalary,int abscentDays){
 this-> baseSalary = baseSalary;
 this -> abscentDays = abscentDays ; 

}

};

class AssistantProfessor: public Employee
{

public:
AssistantProfessor(int baseSalary,int abscentDays)
{ this-> baseSalary = baseSalary;
  this -> abscentDays = abscentDays ; 
}

};







int main () {
  
Lecturer lecturer(40000,7);

lecturer.calculateGrossSalary(7);


return 0;
} 
