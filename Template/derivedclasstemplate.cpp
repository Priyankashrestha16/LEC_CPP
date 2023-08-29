#include<iostream>
using namespace std;
template<class T>
class base
{
    private:
    T data;
    public:
    base(){};
    base(T a){
        data=a;
    }
    void display(){
        cout<<"data:"<<data<<endl;
    }
};
   template <class T>
    class derived1:public base<T>{
        public:
        derived1();
        derived1(T a):base <T>(a){}
    };
int main()
{
   derived1<int>obj(23);
   obj.display();
   return 0;
}