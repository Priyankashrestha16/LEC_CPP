//C++ objects as data types

#include<iostream>
using namespace std;
class complex{
    private:
    float real;
    float img;
    public:
    void readvalue()
    {
        cout<<"\n Enter real part:";
        cin>>real;
        cout<<"\n Enter Imaginary part:";
        cin>> img;
    }
    void showvalue()
    {
        cout<< "("<<real<<","<<img<<")";
    }
    void add(complex c1,complex c2)
    {
 real=c1.real+c2.real;
 img=c1.img+c2.img;
    }
};

int main()
{
    complex c1,c2,c3;
    cout<<"Enter first complex number:"<<endl;
    c1.readvalue();
    cout<<"ENter second complex number:"<<endl;
    c2.readvalue();
    c1.showvalue();
    cout<<"+";
    c2.showvalue();
    c3.add(c1,c2);
   cout<<"=";
   c3.showvalue();
   return 0;
}
