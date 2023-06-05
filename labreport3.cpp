#include<iostream>
using namespace std;
class complex{
    public:
    float real,img;
    void getdata(){
        cout<<"enter real part:";
        cin>>real;
        cout<<"enter imaginary part:";
        cin>>real;
         }
     void showdata(){
        cout<<"("<<real<<","<<img<<")";
     }
     void add(complex cc1,complex cc2){
        real=cc1.real+cc2.real;
        img=cc1.img+cc2.img;
     }
};
int main(){
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3.add(c1,c2);
    return 0;
}