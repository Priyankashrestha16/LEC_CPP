#include<iostream>
using namespace std;
class shape
{
    public:
    virtual void area()=0;
};
class triangle : public shape{
    public:
    void area(){
        cout<<"AREA of derived class.";
    }
};
int main()
{
    shape *s1;
    triangle t1;
    s1=&t1;
    s1->area();
   return 0;
}