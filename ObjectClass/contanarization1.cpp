#include <iostream>
using namespace std;
class A{
    public:
    int data;

   void getdata(){
        cout<<"enter the value of data:";
        cin>>data;
         }

    void showdata(){
        cout<<"the value of data:"<<data<<endl;
      }
};

class B{
    public:
    A a;
    
    int B;
    
    void getdata(){
       
        cout<<"enter the value of B:";
        cin>>B;
        a.getdata();
   }

   void showdata(){
    a.showdata ();
    cout<<"the value of B is:"<<B<<endl;  
        }
};

int main(){
    B b;
    b.getdata();
    b.showdata();
    return 0;
}