#include<iostream>
using namespace std;
class Time
{
    private:
    int hr;
    int min ;
    int sec;

    public:
    Time(){
        hr=12;
         min=0;
         sec=0;
        
    }
    Time(int s){
        sec=(s%3600)%60;
        min =(s%3600)/60;
       hr = s / 3600;
       
    }
    Time( Time &t){
        hr= t.hr;
        min=t.min;
        sec=t.sec;
    }
    void displaytime(){
        cout<<"Time:"<<hr<<"hr,"<<min<<"min,"<<sec<<"sec"<<endl;
    }
};
int main()
{
    Time t1,t2(100);
    Time t3 =t2;
    t1.displaytime();
    t2.displaytime();
    t3.displaytime();
   return 0;
}