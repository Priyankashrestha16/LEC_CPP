#include<iostream>
using namespace std;
class Student{
    private:
    int roll;
    char name[20];
    char Phone[10];
    public:
    void getdata();
    void showdata();
    };

    void Student::getdata(){
        cout<<"\nEnter naem:";
        cin>>name;
        cout<<"\nEnter roll no";
        cin>>roll;
        cout<<"\nENter phone number:";
        cin>>Phone;

            }
    void Student::showdata(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<roll<<endl;
        cout<<"Phone number:"<<Phone<<endl;
     }

     int main(){
        Student s1,s2;
        s1.getdata();
        s2.showdata();
        cout<<"first student"<<endl;
        s1.showdata();
        cout<<"second student"<<endl;
        s2.showdata();
        return 0;
     }

    