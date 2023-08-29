#include<iostream>
using namespace std;
template<class T>
T findmax(T a,T b){
    T result;
    if(a>b)
    result =a;
    else
    result =b;
    return result;
}
int main(){
    int i1=2,i2=3;
    cout<<"greater is:"<<findmax(i1,i2)<<endl;
    float f1=1.1, f2=1.2;
    cout<<"greater is:"<<findmax(f1,f2)<<endl;
    char c1='a',c2='b';
    cout<<"greater is :"<<findmax(c1,c2)<<endl;
    return 0;
}