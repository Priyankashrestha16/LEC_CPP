#include<iostream>
using namespace std;
class vehicle
{
   public:
   vehicle(){
      cout<<"constructor of vehicle invoked"<<endl;
   }
   virtual void display(){
      cout<<"I am vehicle."<<endl;
   }
   ~vehicle(){
      cout<<"Destructor of vehicle invoked."<<endl;
   }
};
class car : public vehicle{
    public:
    car(){
      cout<<"constructor of car invoked."<<endl;
    }
    void display(){
      cout<<"I am car."<<endl;
    }
    ~car(){
      cout<<"Destructor of car invoked."<<endl;
    }
};
int main()
{
   vehicle *v1;
   v1=new car;
   v1->display();
   delete v1;
   return 0;
}