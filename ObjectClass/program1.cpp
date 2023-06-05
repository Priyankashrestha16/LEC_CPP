#include<iostream>
using namespace std;
class friends{
    public:

    char phone[10];
    char address[20];

    friends(){
        cout<<"enter phone number:"<<endl;
        cin>>phone;
        cout<<"enter address:"<<endl;
        cin>>address;
    }

    void info()
    {
     cout<<"the phone number of my friend is:"<<phone<<endl;
        cout<<"the address of my friend is:"<<address<<endl;

    }
};
int main(){
    friends ram,gita;
    cout<<"ram:"<<endl;
     ram.info();
     cout<<"gita:"<<endl;
     gita.info();
}