#include<iostream>
using namespace std;
class complex 
{
   private:
   float const real=1.1;
    float img;
  public:
   void getnum(float x){
      img=x;
    cout<<"img:"<<img<<endl;

   }
    void display();
};
 void complex :: display(){
    cout<<"("<<real<<","<<img<<")";
 }
int main()
{
    complex c1;
    c1.getnum(2.2);
   cout<<"displaying complex number:"<<endl;
  c1.display();
   return 0;
}