#include <iostream>

using namespace std ;


//virtual functions

class Instruments {

public:
virtual void createSound() =0;    // pure virtual function --> some sort of Abstraction
};


class Violin : public Instruments{
public:
void createSound()
{
    cout << "Violin Sound"<< endl;
}
};

class Guitar: public Instruments{
public:
void createSound()
{
    cout << "Guitar Sound"<< endl;
}

};

int main ()
{


   Instruments* g1 = new Guitar();
   g1->createSound();

 Instruments* v1 = new Violin();
 v1-> createSound();


    return 0 ;
}