#include <iostream>
using namespace std;
class complex{
    public:
    float real;
    float img;

    complex(){
        real=0;
        img=0;
    }

    complex(float a,float b){
        real= a;
        img=b;
   }
   void getdata(){
    cout<<"enter the real part:";
    cin>>real;
    cout<<"enter the imaginary part:";
    cin>>img;
   }
   void showdata(){
    cout<<"("<<real<<","<<img<<")";
   }

   complex add (complex cc2){
    complex result;
    result.real= real+ cc2.real;
    result.img =img+ cc2.img;
    return result;
   }

};
int main(){
    complex c1,c2(2.3,4.5),c3;
    c1.getdata();
    c3=c1.add(c2);
    c1.showdata();
    cout<<"+";
    c2.showdata();
    cout<<"=";
    c3.showdata();
}