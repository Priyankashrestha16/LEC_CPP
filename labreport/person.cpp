#include <iostream>
#include "person.h"
using namespace std;
void person:: getdata(){
    cout<<"Enter name:";
    cin>>name;
    cout<<"enter age:";
    cin>>age;

}
void person:: display(){
    cout<<"\n Name:"<<name;
    cout<<"\n Age:"<<age;
}