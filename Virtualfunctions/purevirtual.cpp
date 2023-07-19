#include<iostream>
using namespace std;
class parallelogram
{
    protected:
    float length;
    float breadth;
    public:
    parallelogram(){
        length=0;
        breadth=0;
    }
    parallelogram(float l,float b){
        length=l;
        breadth=b;
    }
     float perimeter(){
        return 2*(length + breadth);

    }
    virtual float area()=0;
};
class rectangle: public parallelogram{
    public:
    rectangle(){}
    rectangle(float l,float b):parallelogram(l,b){}

    float area(){
      return length*breadth;
    }
};
int main()
{
    parallelogram *ptr;
   rectangle r1(1.1,2.1);
    ptr=&r1;
    cout<<"AREA:"<<ptr-> area()<<endl;
  cout<<"perimeter:"<<ptr-> perimeter()<<endl;
    return 0;
}