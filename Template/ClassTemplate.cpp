#include<iostream>
using namespace std;
template<class T>
class Number{
    private:
    T num;
    public:
    Number(T n){
        num=n;
    }
    T getnum(){
        return num;
    }
};
int main(){
    Number<int>numint(4);
    cout<<"int number:"<<numint.getnum()<<endl;
    Number<float> numfloat(2.3);
    cout<<"float number:"<<numfloat.getnum()<<endl;
    return 0;
    
}