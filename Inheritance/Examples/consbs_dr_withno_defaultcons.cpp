#include<iostream>
using namespace std;
class  base
{
    public:
    base (int data){
        cout<<"paramiterized constructor from derived class"<<endl;
    }
};
class derived : public base{
    public:
    derived(int data): base( data)
    {
        cout<<"parameterized comstructor of derived class"<<endl;
    }
};
int main()
{
    derived d(5);
   return 0;
}