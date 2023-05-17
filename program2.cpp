 #include <iostream>
using namespace std;
 class Room {
    public:
    int length;
    int height;
    int breadth;

    void calculateArea( int a , int b){
        length =a;
        breadth = b;
        cout<< "the area of the room is:"<<length * breadth;
    }

    void calculateVolume(int a,int b,int c){
        length =a;
        breadth =b;
        height=c;
        cout<<"the volume of the room is:"<< length* breadth*height;
    }
 };

 int main(){
    Room obj401;
    obj401.calculateArea(10,20);
    obj401.calculateVolume( 10,20,30);
   
   return 0;
 }

  