#include<iostream>
using namespace std;
class complex
{
    public:
    float real;
    float img;

    complex(){};

    complex (float rl,float im){
        real=rl;
        img=im;
    }
    void display(){
        cout<<"("<<real<<","<<img<<")"<<endl;
    }
    friend complex operator + (complex c1,complex c2);
};
 complex operator +(complex c1,complex c2){
   complex temp;
   temp.real= c1.real + c2.real;
   temp.img=c1.img +c2.img;
   return temp;
 }
int main()
{
    complex c1,c2,c3;
    c1 = complex(2.1,2.3);
    c2=complex (1.1,2.4);
    c1.display();
    c2.display();
    c3=c1+c2;
    c3.display();
   return 0;
}