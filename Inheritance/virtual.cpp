#include<iostream>
using namespace std;
class Parent 
{
    public:
      virtual void display(){
        cout<<"this is parent class.";

    }
};
 class child : public Parent
 {
    public:
    void display(){
        cout<<"this is child class.";

    }
 };
int main()
{
    Parent *Bbtr;
    child c1;
    Bbtr = &c1;
    Bbtr->display();
   return 0;
}