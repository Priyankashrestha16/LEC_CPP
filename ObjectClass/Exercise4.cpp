//making outer function inline

#include <iostream>
using namespace std;
class student{
    private:
    int roll;
    char name[20];
    char phone[10];
    public:
    void getdata();
    void showdata();

};
 inline void student :: getdata()
 {
    cout<<"\nEnter Roll no:";
    cin>>roll;
    cout<<"\nEnter name:";
    cin>>name;
    cout<<"\n Enter phone number:";
    cin>> phone;
 }
 inline void student :: showdata()
 {
    cout<<"Name:"<<name<<endl;
    cout<<"Roll no:"<<roll<<endl;
    cout<<"phone number:"<<phone<<endl;

 }
