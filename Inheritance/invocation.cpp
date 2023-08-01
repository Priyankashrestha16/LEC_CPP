#include<iostream>
using namespace std;
class parent
{
    public:
    parent(){
        cout<<"this is parent class constructor."<<endl;
    }
    ~parent(){
        cout<<"this is parent class destructor."<<endl;
    }
};
class child : public parent{
    public:
    child(){
        cout<<"this is child class constructor."<<endl;
     }
    ~child(){
       cout<<"this is child class destructor."<<endl; 
     }
};
int main()
{
   child c1;
  return 0;
}