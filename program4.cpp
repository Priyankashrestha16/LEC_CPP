#include <iostream>
using namespace std;
 class Account {
    public:
    float salary = 6000;
     
     Account(){
        
        cout<< "this is method"<<endl;
     }

     void display(){
        cout<<"this is base class"<<endl;
     }
 };

 int main(){
    Account a1;
    return 0;
 }