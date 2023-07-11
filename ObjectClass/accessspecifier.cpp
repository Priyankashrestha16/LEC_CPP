#include <iostream>
using namespace std;

class vehicle{
    private:
    int platenumber;

    public:
    vehicle(int pnum){
      platenumber=pnum;
      cout<<"the plate number is:"<<platenumber<<endl;
    }
  };
int main(){
    vehicle scootor(23445); 
 }