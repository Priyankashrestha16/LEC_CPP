#include <iostream>
using namespace std;
  class student{
    public:
     int marks;
    
    student(int m){ 
        marks=m;
     }
  }; 

  void Calculate_average(student s1,student s2){
    double average= (s1.marks+s2.marks)/2;
    cout<<"the average marks of two students is:"<<average<<endl;

  } 
  int main(){
    student s1(10),s2(20);
    Calculate_average(s1,s2);
  return 0;
  }