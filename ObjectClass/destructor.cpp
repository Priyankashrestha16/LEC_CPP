#include <iostream>
#include <cstring>
using namespace std;
class marks{
    public:
    int mark;

   marks(int a){
       mark= a;
      cout<<"contructor is called."<<endl;
         cout<<"MARKS:"<<mark<<endl;
        }
    ~marks(){
       
       cout<<"destructor is called."<<endl;
        cout<<"MARKS:"<<mark<<endl;
         }
    
};
int main(){
   marks m1(23);
    return 0;
}