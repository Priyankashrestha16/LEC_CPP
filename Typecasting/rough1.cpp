#include<iostream>
using namespace std;     //with the help of operator
class Time
{
    public:
    int hrs, min;
    void operator=(int);
    void display();
};
 void Time :: operator=(int t){
    cout<<"Basic to class type conversion...."<<endl;
    hrs=t/60;
    min=t%60;
};
 void Time:: display(){
    cout<<"Hours:"<<hrs<<endl;
    cout<<"Minutes:"<<min<<endl;
};
int main()
{
    Time t1;
   int duration;
   cout<<"Enter the duration in minutes: ";
   cin>>duration;
   cout<<"first method:";
    t1 = duration;
   t1.display();
   cout<<"second method:";
  t1.operator=(duration);
  t1.display();
   return 0;
}