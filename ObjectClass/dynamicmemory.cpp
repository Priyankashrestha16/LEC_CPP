#include <iostream>
using namespace std;
int *roll=new int;
char *name=new char[15];

void scanrollandname(){
    cout<<"ENter your name:"<<endl;
    cin>>name;
    cout<<"enter the roll number:";
    cin>>*roll;
}

void freememory(){
    delete roll;
    delete []name;
}

void printrollandname(){
    cout<<endl<<"Name:"<<*name;
    cout<<endl<<"roll:"<<*roll;

}
int main(){
    scanrollandname();
    cout<<endl<<"Memory allocated dynamically for the name and roll";
    cout<<endl<<"value of name and roll before deallocation";
    printrollandname();
    freememory();
    cout<<"\n\nAfter Deallocation:";
    printrollandname();
    return 0;
}