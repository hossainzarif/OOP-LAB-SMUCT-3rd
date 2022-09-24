#include <iostream>
using namespace std;




class Rectangle{
float height, width; 
int radius;


public:
void setXY (float height, float width){

height= height;
width =width;
}



float area (){return (height* width);} };
class Circle
{
int radius;
public:
void setRadius (float radius)
{
this-> radius = radius;
}
float area (){return (3.14* radius);}
};



int main ()
{
Rectangle r;
Circle c;
cout << "area calculation Rectangle";
r.setXY (7.5, 2);

 
cout <<"circle area:" << r.area()<<endl;
c.setRadius (3);
cout <<  c.area()<< endl;



return 0; }