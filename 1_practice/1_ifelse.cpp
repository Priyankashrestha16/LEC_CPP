#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<< "Enter threee  numbers:";
    cin>> a,b,c;
    if(a>b)
     if (a>c)
      cout<<a<<"a is the largest number.";
      else
      cout<<c<<"c is the largest number.";
    else
      if(b>c)
      cout<<b<<"b is the largest number.";
      else
      cout<<c<<"c is the largest number.";
     return 0;    
}