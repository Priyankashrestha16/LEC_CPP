#include<iostream>
using namespace std;
class Parent
{
protected:
int id_protected;
};
class Child : private Parent{
 public:
 void setID(int id){
    id_protected = id;
 }
 void displayID(){
    cout<<"id_protected is :"<<id_protected<<endl;
 }
};
int main()
{
    Child obj1;
    obj1.setID(234);
    obj1.displayID();
   return 0;
}