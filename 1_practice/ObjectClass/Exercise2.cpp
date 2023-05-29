#include <iostream>
using namespace std;
class Student{
    private:
    int roll;
    char name[20];
    char phone[10];
    public:
    void getdata()
    {
        cout<<"\n Enter Roll no:";
        cin>> roll;
        cout<<"\n Enter Name:";
        cin>> name;
        cout<<"\n Enter phone number:";
        cin>> phone;
    }
    void showdata(){
        cout<< "Name:"<< name<< endl;
        cout<<"Roll no:"<<roll<< endl;
        cout<<"Phone number:"<<phone<<endl;
    }
};
int main()
{
    Student s1,s2;
    s1.getdata();
    s2.showdata();
    cout<<"first student"<<endl;
    s1.showdata();
    cout<<"second student"<<endl;
    s2.showdata();
    return 0;
}