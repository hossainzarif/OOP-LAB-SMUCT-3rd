#include <iostream>

using namespace std ;

class Car {

protected:
 string colour ;

 public:
 int number_of_tires =4;
 int number_of_doors =4;
 bool hassunroof; // true or false

void show_Info()
{
    cout << "COULOUR-- "<< colour << endl;
    cout << "Has Sun Roof -- "<< hassunroof << endl;
}
};

//Toyota & Ford Gasoline 
// Mercedes Diesel  

    

class Toyota: public Car {
   public: 
    Toyota (string colour , bool hassunroof){

        this -> colour = colour ;
        this -> hassunroof = hassunroof;
    }

};
class Mercedes: public Car {

public:
    void runs_on ()
{
    cout << "RUNS ON-- Diesel   "<< endl; // POLYMORPHISM
}

};

class Ford: public Car {

};

class ToyotaPrius: public Toyota {

};
class ToyotaCamry: public Toyota
{

};

class Mustang : public Ford {

};

class MercedesCLA: public Mercedes{

};



// Toyota, Mercedes, Ford
// is a relation or is a type of relation --> Inheritance

int main () {
  

Mercedes merc ; 
merc.runs_on();

Toyota toyota("RED", true); 

toyota.show_Info();


return 0;
} 






