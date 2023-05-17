#include <iostream>
using namespace std;
class Room{
    public:
    int length;
    int breadth;
    int height;

    double calculateArea(){
       return length*breadth;
    }

     double calculateVolume(){
      return length * breadth * height;
}
};
  int main(){
    Room obj401;
    cout<< "enter length of room:";
    cin>> obj401.length;
    cout<< "enter breadth of room:";
    cin>> obj401.breadth;
    cout << "enter height of room:";
    cin>> obj401.height;

    cout<<"Area of room:"<< obj401.calculateArea()<<endl;
    cout<< "Volume of room:"<< obj401.calculateVolume();
    
  }