
#include <iostream>

using namespace std ;


// CSE, EEE , GDM 

// lec, ta 

// is a relationship --> Inheritance 

class Department {

   

};

class Employee{



//Employee_id, Designation, Department_name and Base Salary. 
    protected:
        string empId;
        string designation;
        string deptName ; 
        int baseSalary ; // camelcase
        float grossSalary;
        double netSalary; 

//Allowance = BasicSalary * (Percentages of Allowance)

// 0.07 

public:
    float calcGrossSalary (int allowance) // 7%  10% 9%   
    {
        
       return grossSalary = baseSalary+ (baseSalary* ( float(allowance)/100));
    }





    float calcGrossSalary(double allowance) // 0.07 0.08
    {
        return grossSalary = baseSalary+ ( float(baseSalary)* (allowance));

    }



public:
 double calcNetSalary(int abscentDays,int dyasofMonth)
 {
    return netSalary = grossSalary - (  abscentDays * double(baseSalary)/dyasofMonth) ;
 }

};



class Student {
     
     protected:
        string name ;
        string deptName;
        string uUid;

    private:
     string secretKeycode; 

    public:
    Student (string secretKeycode)
{
    this-> secretKeycode = secretKeycode;

}

public:
    string getsecretKeycode()
    {
        return secretKeycode;
    }


};


class Lecturer: public Employee {

public:
 Lecturer (int baseSalary)
{
    this-> baseSalary = baseSalary;

}

};

class Professor: public Employee {


public:
 Professor (int baseSalary)
{
    this-> baseSalary = baseSalary;

}
};

class AssistantProfessor: public Employee {

};

class TA: public Employee, public Student
{


};



int main () {
  

Lecturer lec(40000), lec1(40000); 

cout << "Lecturer 01  Gross Salary---- " << lec.calcGrossSalary(7) << endl; // integer --> int allowance


cout << "Lecturer 01  Net Salary---- " << lec.calcNetSalary(6,31) << endl; // float --> int allowance


Professor prof (150000);
cout << "Professor 01  Gross Salary---- " << prof.calcGrossSalary(12) << endl; // float --> int allowance

cout << "Professor 01  Net Salary---- " << prof.calcNetSalary(2,31) << endl; // float --> int allowance


Student student("UI6754QW"), student02 ("UI1233231");



cout << student.getsecretKeycode() +"_"+ "213071023" << endl;

return 0;
} 
