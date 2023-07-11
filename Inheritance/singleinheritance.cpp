#include <iostream>
using namespace std;
class student{
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
class college : public student{
    protected:
      char college_name[20];
    
    public:
    void getdata(){
        student::getdata();
        cout<<"enter college name:"<<endl;
        cin>>college_name;
    }
    void showdata(){
        student :: showdata();
        cout<<"college name:"<<college_name<<endl;
    }
    
};
int main(){
    college c1;
    c1.getdata();
    c1.showdata();
    return 0;
}