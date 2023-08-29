#include<iostream>
using namespace std;
class num
{
    public:
    int n;

    num(int a){
        n=a;
    }
    void operator ++(){    //prefix
        ++n;
    }
   void operator ++( int){   //postfix
    n++;
  }
 void display(){
    cout<<"NUm:"<<n<<endl;
 }
 
};
int main()
{
    num n1(2);
    ++n1;
    n1.display();
    n1 ++;
   n1.display();
   return 0;
}