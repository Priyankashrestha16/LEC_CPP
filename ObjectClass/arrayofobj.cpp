#include <iostream>
using namespace std;
class student{
    public:
    char name[20];
    int rollno;

    void getdata(){
     cout<<"Enter the name of student:";
        cin>>name;
     cout<<"enter roll no of students:";
        cin>>rollno;
        }

    void showdata(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No:"<<rollno<<endl;
        
    }
    void display(){
        cout<<"Informatoon of students is:";
    }
   
};
int main(){
    int i;
    student s1[10];
    for(i=0;i<5;i++){
      s1[i].getdata();  
    }
     s1[i].display();
    for(i=0;i<5;i++){
        s1[i].showdata();
    }

}