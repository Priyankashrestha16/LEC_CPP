#include<iostream>
#include<cmath>
using namespace std;
class number{
    private:
    double num;
    public:
    class NEG{};
    void readnum();
    double sqroot();
};
void number :: readnum(){
    cout<<"enter number:";
    cin>>num;
}
double  number :: sqroot(){
    if (num<0)
    throw NEG{};
    else 
    return (sqrt (num));
}
int main(){
    number n1;
    double res;
    n1.readnum();
    try{
        cout<<"\n trying to find square root ...... ";
        res=n1.sqroot();
        cout<<"\n Square root is:"<<res<<endl;
        cout<<"Exceptionnis not raised.";
    }
    catch (number::NEG){
        cout<<"\n square root of negative number is not possible.";
    }
}