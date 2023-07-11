#include<iostream>
using namespace std;
class  employee
{
 private:

 char name[25];
 float salary;
 public:

 void getdata(){
    cout<<"\n Enter name:";
    cin>>name;
    cout<<"enter salary:";
    cin>>salary;
 }
 void showdata(){
    cout<<"\n Name:"<<name<<endl;
    cout<<"\n Salary:"<<salary<<endl;
 }
};
int main()
{
    employee *eptr;
    employee e;
    eptr = &e;
    eptr -> getdata();
    cout<<"\n Accessing data through pointer variable:";
    eptr ->showdata();
   return 0;
}

