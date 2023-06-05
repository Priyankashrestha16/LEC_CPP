#include <iostream>
using namespace std;
class Car{
    public:
    int carno;
    int price;

    Car(){
    carno=1024;
    price= 65373.33;     
 }
 Car(int a,int b){
    carno=a;
    price=b;
 }
 void display(){
    cout<<"the car number is:"<<carno<<endl;
    cout<<"Price of car is:"<<price<<endl;
 }

   
};
int main(){
    Car c1;
    Car  c2(200,3455);
    cout<<"information of car:"<<endl;
    c1.display();
   c2.display();

    return 0;
}