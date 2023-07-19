#include<iostream>
using namespace std;
class vehicle
{
    protected:
    char name[10];

    public:
    vehicle(){
     cout <<"constructor of class vehicle is called"<<endl;
    }
    ~vehicle(){
        cout<<"destructor of class vehicle  is called."<<endl;
    }
};
class car: public vehicle{
    public:
    car(){
        cout<<"constructor of class car  is called"<<endl;
    }
    ~car(){
        cout<<"destructor  of class car is called "<<endl;
    }

};;
int main()
{
    car c1;
   return 0;
}