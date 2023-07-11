#include<iostream>
using namespace std;
class A
{
    private:
   int x;
   public:
   A (){
    x=1;
   }

   void operator +(){
    
   }
   void display(){
    cout<<"the value of a is"<<x<<endl;
   }
};
int main()
{
    A a;
    +a;
    a.display();

   return 0;
}