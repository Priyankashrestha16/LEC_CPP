#include <iostream>
using namespace std;
class Car{
    public:
    int carno;
    int price;

    Car(){
        carno=1024;
        price=83223;
            }

   Car(int a ,int b){
    carno=a;
    price=b;
   }

   void display(){
    cout<<"The car number is:"<<carno<<endl;
    cout<<"Price of car:"<<price<<endl;
   }
};
int main(){
    Car c1;
    Car c2(200,3455);
    cout<<"Information of car:"<<endl;
    c1.display();
    c2.display();
    return 0;
}