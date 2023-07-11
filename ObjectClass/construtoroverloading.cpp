#include <iostream>
using namespace std;
class vehicle{
    public:
    int price;

    vehicle(){
        price=23333;
    }

    vehicle(int p){
        price =p;
    }
    int getdata(){
        return price;
    }
};
int main(){
    vehicle v1, v2(2346);
    cout<<"the price of vehicle is:"<<v1.getdata()<<endl;
    cout<<"the price of vehicle is :"<<v2.getdata()<<endl;
    return 0;
}
