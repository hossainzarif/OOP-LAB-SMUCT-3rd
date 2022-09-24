

// Exception Handling --> try, catch, throw



#include <iostream>
using namespace std;




class Rectangle{
float height, width; 
int radius;


public:
void setXY (float height, float width){

this->height= height;
this->width =width;
}




public:
double  marsPlanetarea (){

    try // fridge --> tomato--> filter
    {
    if(width <= 0 ) // if rotten
    {
        throw width; //throw rotten tomato
    }
    if (width == 1)
    {
        throw 123123132;
    }


   return (height/ width);

    }
    catch (float width) // dustbin --> disposal
    {
    return 0;
    }
    catch(...)
    {
    return 0;

    }



    
}


};

int main ()
{
Rectangle r;
r.setXY (7.5, 23);
cout<<   r.marsPlanetarea() << endl;

return 0; 

}
