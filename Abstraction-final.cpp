#include <iostream>

using namespace std ;


// --> button --> key press --> Dial ()

class Smartphone{
public:
virtual void Messaging()=0;

public:
virtual void Makes_Call ()
{
    cout << "Making call"<<endl; // implementation
}

};

class Android: public Smartphone{

    void Messaging()
    {
        cout << "RCT MEssaging" << endl;
    }

    void Makes_Call()
    {
        cout << "MAKES CALL FOR ANDROID" << endl;
    }

};
class IOS: public Smartphone{
  void Messaging()
    {
        cout << "RNT MEssaging" << endl;
    }

};

class BlackBerry: public Smartphone{

};

int main ()
{
Smartphone* android = new Android();


android->Makes_Call();
android->Messaging();


    return 0 ;
}