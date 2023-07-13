#include<iostream>
using namespace std;
namespace BCT{
    char subject[20]="OOP";
    int labroom=401;
    void printsubject(){
        cout<<"the subject is:"<<endl;
    }
    void printroom1(){
         cout<<"the roomno is:"<<endl;
    }
    }
namespace BEI{
    char subject[20]="Applied mechanics";
    int room =304;
    void printsubject(){
    cout<<"the subject is:"<<endl;
    }

    void printroom2(){
    cout<<"the roomno is:"<<endl;
    }
}
int main(){
     
     BCT::printsubject();
     cout<<BCT::subject <<endl;
     BCT :: printroom1();
     cout<<BCT ::labroom<<endl;
     
      BEI::printsubject();
     cout<<BEI::subject <<endl;
     BEI :: printroom2();
     cout<<BEI ::room<<endl;
    return 0;
}
