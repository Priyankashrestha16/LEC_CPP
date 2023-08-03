#include<iostream>
using namespace std;
class Time
{
    public:
    int hrs, min;
    Time (int);
    void display();
};
Time :: Time(int t){
    cout<<"Basic to class type conversion"<<endl;;
    hrs=t/60;
    min=t%60;
};
 void Time:: display(){
    cout<<"Hours:"<<hrs<<endl;
    cout<<"Minutes:"<<min<<endl;

};
int main()
{
   int duration;
   cout<<"Enter the duration in minutes: ";
   cin>>duration;

   Time t1 = duration;
   t1.display();
    
   return 0;
}