#include<iostream>
using namespace std;
class room
{
    public:
    float length;
    float radius;
    float breadth;

    void calcArea(int a){
        length = a;
        cout<<"the area of cube is:"<<length*length*length<<endl;
 }
    
      double calcArea(double b){
       radius = b;
         cout<<"the area of circle is:"<<3.14*radius*radius<<endl;
 }

    double calcArea(double c,double d){
        length=c;
        breadth=d;
        cout<<"the area of rectangle is :"<<length*breadth<<endl;
    }
};
int main()
{
    room a1,a2,a3;
    a1.calcArea(10);
     a2.calcArea(2.5);
    a3.calcArea(1.5,1.5);
   return 0;
}