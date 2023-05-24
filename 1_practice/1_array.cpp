#include <iostream>
using namespace std;
 int main()
 {
   int  m[5],i, totalmarks=0;
   cout<< " enter marks of 5 subjects:";
 
   for(i=0;i<5;i++)
 {
  
  cin>> m[i];
  
 }
 for(i=0;i<5;i++)
 {
 totalmarks = totalmarks + m[i];
 cout<< "Total marks:" << totalmarks;
  
 }
 return 0;
 }