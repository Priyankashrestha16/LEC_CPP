#include<iostream>
using namespace std;
template< class T >
T add(T num1,T num2){
    return (num1+ num2);
}
int main(){
    int i1=2 , i2=3;
    cout<<"Result1:"<<add(i1,i2)<<endl;
    float f1=1.2 ,f2=2.2;
    cout<<"Result2:"<<add(f1,f2)<<endl;
    char c1='a',c2='b';
    cout<<"Result3:"<<add(c1,c2)<<endl;
    }