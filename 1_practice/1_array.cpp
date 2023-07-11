#include <iostream>
using namespace std;
 int main()
 {
  string arr[]={ "OOP", "TOC","Maths","EDC","EM"};
   int  mark[5];
   int i, totalmarks=0;
   
    for(i=0;i<5;i++)
 { 
  cout<< " enter marks of"<<arr[i];
   cin>> mark[i];
  
}
for(i=0;i<5;i++)
 {
 totalmarks += mark[i];
  }
  cout<< "Total marks:" << totalmarks;

 return 0;
 }