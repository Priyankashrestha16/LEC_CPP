#include<iostream>
using namespace std;
class base
{
   public:
    int a=2;

     virtual void print(){
        cout<<"This is the function of base class"<<a<<endl;
    }
};
 class child : public base{
    public:
   
    void print(){
        cout<<"This is the function of child class:"<<a<<endl;
    }
 };
int main()
{
    
   
    base *b1;
    child c1;
    b1 = &c1;
    b1->print();
   return 0;
}