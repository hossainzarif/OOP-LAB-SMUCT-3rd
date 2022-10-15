

// You have been assigned to develop a simple C++ application for the Khalid Farhan Pet Shop. 
//They usually trade pets like Cats, Dogs. Recently they also added Animals like Sheep, Goat, Cow and Horse. 
//Animals have name, scientefic_name, age. We don’t want to disclose the scientific_name for any of the animals.
// scientific_name would be private. Some of the activities the pets do are they eat and play. Cats and dogs are carnivorous , 
//they only eat meat. But other animals eat grass and vegetables. All animals play with a ball. Also only Cow and Goat gives milk.
// Design the system with OOP concepts. Also, use setSci_name() to set the value of scientific name and
// showInfo() to display name and age. Furthermore, use givesmilk() to print “Gives milk”.
// Display activities of the animals using eat() & play()
// they all makes sound


#include <iostream>

using namespace std ;



class Animal {
    protected:
        string name;
        double age;
private:
    string sci_fi_name;

       public:
        string GetSci_fi_name() {
                return sci_fi_name;
        }

        void SetSci_fi_name(string sci_fi_name) {
                this->sci_fi_name = sci_fi_name;
        }

    public:
    void setName(string name)
    {
        this->name = name;
    }
    string GetName(){
                return name;
        }



public:
    virtual void Play()
    {
        cout<< "Play with a ball" ;
    }
public:
    virtual void eats () {
        cout << "Grass" ;
    }




public:
virtual void makes_sound()=0;

};

class Cat:public Animal{


};


class Mammal
{
public:
virtual void givesMilk()
{
cout << "Gives Milk";
}
};



class Cow: public Animal,public Mammal {

};
class Goat: public Animal, public Mammal {

};

class Dog: public Animal {
    private:
    string cant_eat;

publlic:
void makes_sound()
{

}
    public:
    string GetCant_eat() {
        return cant_eat;
    }



  
};

int main ()
{
    Dog dog;
    dog.setName("Toby");
    cout << dog.GetName() << endl;
    dog.SetSci_fi_name(dog.GetName());
        cout << dog.GetName() << endl;


}