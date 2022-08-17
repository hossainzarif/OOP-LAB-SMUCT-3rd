#include <iostream>

using namespace std ;




class Animal {
    public:
        void eats()
        {
            cout << "Eating Grass" << endl;
        }
    public:
       void eats(int x)
        {
            cout << "Eating NUmber X" << endl;
        }

    ~Animal()
    {
        cout << "Destructor Called" << endl;
    }

};

class Cat: public Animal {
 public:
        void eats()
        {
            cout << "Eating Protien" << endl;
        }
        // void eats (int x )
        // {
        //                 cout << "Eating Protien NUMBER" << endl;

        // }

};


int main () {

    Cat cat1;
    // cat1.eats();

     cat1.eats();

     Animal animal;



    // cat1.Animal:: eats();

}