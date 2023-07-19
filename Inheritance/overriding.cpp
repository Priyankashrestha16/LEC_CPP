#include<iostream>
using namespace std;
class base
{
   public:
    int a=2;

    void print(){
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
    child c1;
    c1.print();
    c1.base ::print();        
   return 0;
}