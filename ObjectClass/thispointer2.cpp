#include <iostream>
using namespace std;
class mobile{
    private:
    int m=10;
    public:
    void display(){
        cout<<"the value of m is: "<<m;
        cout<<"the value of what is:"<<this->m<<endl;
        cout<<"the address of value is: "<<this;
    }

};
int main(){
    mobile m1,m2;
    m1.display();
     m2.display();

}