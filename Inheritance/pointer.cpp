#include<iostream>
using namespace std;
class base
{
    public:
     void print(){
        cout<<"base function"<<endl;
     }
};
class child: public base{
    public:
    void print(){
        cout<<"child class"<<endl;
    }
};
int main()
{
    child c1;
   base *ptr=&c1;
    //c1.print();
    ptr-> print();
   return 0;
}