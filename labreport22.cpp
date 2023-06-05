#include <iostream>
using namespace std;
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
 int getdata(){
    int a;
    cout<< "enter value of a:"<<endl;
    cin>> a;
    return a;
 }
 int main(){
    int x=getdata();
    int y=getdata();
    cout<<"value before swap:"<<x<<","<<y<<endl;
    swap(&x,&y);
    cout<<"value after swap:"<<x<<","<<y<<endl;
    return 0;
 }