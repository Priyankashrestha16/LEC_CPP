#include<iostream>
using namespace std;
class student
{
    protected:
    char name[10];
    int rollno;
    
    public:
    void getdata(){
        cout<<"enter name:"<<endl;
        cin>>name;
        cout<<"enter roll no:"<<endl;
        cin>>rollno;
    }
    void showdata(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll:"<<rollno<<endl;
    }
};
 class employee{
    protected:
    int salary;
    int empID;

    void getdata(){
        cout<<"enter salary:"<<endl;
        cin>>salary;
        cout<<"enter employee id:"<<endl;
        cin>>empID;
    }
    void showdata(){
        cout<<"Salary:"<<salary;
        cout<<"employee id:"<<empID;
    }
 };
 class marketing_manager: public student ,public employee{
    protected:
    int working_hrs;

    public:
    void getdata(){
        student :: getdata();
        employee :: getdata();
        cout<<"enter no of hours:"<<endl;
        cin>>working_hrs;
    }
    void showdata(){
        student ::showdata()<<endl;
        employee :: showdata()<<endl;
        cout<<"Working hours:"<<working_hrs<<endl;    }
 };
int main()
{
    marketing_manager m1;
    m1.getdata();
    m1.showdata();
   return 0;
}