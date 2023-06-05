#include <iostream>
using namespace std;
void swap(float &x,float &y) {
    int temp;
     temp=y;
     y=x;
     x=temp;
}
   float getnum()   
{
     float a;
    cout<<"enter value of a:";
    cin>>a;
   return a;          
}
int main()
{
float x=getnum();
float y=getnum();
cout<<"value before swap:"<<x <<","<<y<<endl;
swap(x,y);                           
cout<<"value after swap:"<<x<<","<<y<<endl;
return 0;
}
