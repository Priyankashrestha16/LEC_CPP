#include <iostream>
using namespace std;

void add( int a, int b)
{
    cout << "sum:" << (a+b);
}

void add (int a, int b, int c)
{
    cout << " sum:" << (a+b+c);
    
}
 int main()
 {
    add(10,20);
    add(10,20,30);
    return 0;
 }
    