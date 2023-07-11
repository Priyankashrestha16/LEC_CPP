#include<iostream>
using namespace std;
class Binary
{
    private:
    int a ;
    int b;
public:
 Binary(){}
Binary(int x, int y){
    a=x;
    b=y;

}
  Binary operator +(Binary bin){
    Binary temp;
    temp.b =b +bin.b ;
        temp.a=a+ bin.a;
    return temp;

  }
  void display(){
    cout<<"value of a is:"<<a<<endl;
     cout<<"value of b is:"<<b<<endl;
  }
};
int main()
{
    Binary b1,b2,b3;
    b1= Binary (0,20);
    b2= Binary(90,40);
    cout<<"INformation of b1:"<<endl;
    b1.display();
    cout<<"INformation of b2:"<<endl;
    b2.display();
    b3=b1+b2;
    cout<<"displaying the output:"<<endl;
    b3.display();
   return 0;
}