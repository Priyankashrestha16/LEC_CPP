#include<iostream>
using namespace std;
 
class sathiharu {
    public: 
        string name;
        string addresss;
        int age;

 
    public:
       sathiharu(string nam,string addr,int umer){
           cout<<"contructor call bhayo tw?"<<endl;
       }

        void ghumeprogram() {
            cout<<"Oi Espali ghumna jaam bujhis "<<name<<" umm "
            <<age<<"ko umer ma hike garna sakinchha masta. ka jane hola ta "
            <<addresss<<" jada thik hola?";
        }
};
 
int main() {
    sathiharu firstfriend("ram","addd",23);
     firstfriend.name = "Krystal";
     firstfriend.age = 22;
    firstfriend.addresss = "Pilotbaba";
    firstfriend.ghumeprogram();
 
    secondfriend.name = "Sushil";
     secondfriend.age = 20;
     secondfriend.addresss = "pilotbaba";
    secondfriend.ghumeprogram();
 
}