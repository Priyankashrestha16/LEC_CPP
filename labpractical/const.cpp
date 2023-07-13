#include<iostream>
using namespace std;
class test{
    private:
    int data;
    public:
    test(int n=0){
        data=n;
    }
    void getdata(int n){
        data=n;
    }
    int getdata()const{
        return data;
           }

};
int main(){
    test t1(1);
    const test t2(2);
    t1.getdata(3);
    cout<<t1.getdata();
   // t2.getdata();
   // cout<<t2.getdata();
}
