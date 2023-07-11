#include <iostream>
using namespace std;
class Wall{
    public:
    int length;
    int height;

    Wall(int len,int hgt){
        length=len;
        height=hgt;

    }

   Wall(Wall & obj){
    length= obj.length;
    height =obj.height;

   }
   double calculateArea(){
    return length *height;
   }

};
int main(){
    Wall wall1(12,2);
    cout<<"Area of wall 1 is:"<<wall1.calculateArea()<<endl;
    Wall wall2(wall1);
    cout<<"Area of wall 2 is:"<<wall2.calculateArea()<<endl;
}