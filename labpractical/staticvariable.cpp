#include<iostream>
using namespace std;
class statics{
    private:
    static int num;
    public:
   
  void func(){
    cout<<"value of num is:"<<num<<endl;
}
};
int main(){
    statics s1,s2;
    s1.num=1;

    s1.func();

}