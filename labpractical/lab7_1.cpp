#include<iostream>
using namespace std;
class student
{
    protected:
    char name[10];
    int rollno;

    public:
    void getdata(){
        cout<<"Enter name of student:";
        cin>>name;
        cout<<"Enter roll number:";
        cin>>rollno;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<rollno<<endl;
    }
};
 class test:public student{
    protected:
    float m1,m2,m3,marks,totalmarks;

    public:
    void getdata(){
        student :: getdata();
        cout<<"Enter the marks of 3 subjects:"<<endl;
        cout<<"TOC:";
        cin>>m1;
        cout<<"EDC:";
        cin>>m2;
        cout<<"OOP:";
        cin>>m3;
    }

    void display(){
     student::display();
       totalmarks= m1+m2+m3;
       cout<<"Total Marks is:"<<totalmarks<<endl;
    }
};
class result : public test{
    public:
    void getdata(){
        test ::getdata();
    }
    void display(){
        test:: display();
        if (totalmarks>10){
            cout<<"PASS";
        }
        else{
            cout<<"FAIL";
        }
    }
};
int main()
{
    result r1;
    r1.getdata();
    r1.display();
   return 0;
}