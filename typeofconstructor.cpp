#include <iostream>
using namespace std;
class wall
{
public:
   double length;
   double height;

   wall()
   {
      length = 3.2;
      height = 2.5;
   }
   wall(double x, double y)
   {
      length = x;
      height = y;
   }
   wall(wall &obj)
   {
      length = obj.length;
      height = obj.height;
   }
   double calculateArea()
   {
      return length * height;
   }
};
int main()
{
   wall wall1, wall2(3.2, 4.3);
   wall wall3 = wall2;
   cout<<"Area:"<<wall1.calculateArea()<<endl;
   cout<<"Area:"<<wall2.calculateArea()<<endl;
   
   return 0;
}