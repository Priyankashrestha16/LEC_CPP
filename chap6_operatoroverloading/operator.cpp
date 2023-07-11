#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    int b;
    int c;

 A(int x,int y,int z){
   a=x;
   b=y;
   c=z;
 }
  void operator -(){
    a= -a;
    b =-b;
    c= -c;
 }
   void display(){
    cout<<"the value of a,b and c are:"<<a<<","<<b<<","<<c<<endl;
  }
   
};
int main()
{
   A obj(3,-2,4);
   -obj;
   obj.display();
    
   return 0;
}