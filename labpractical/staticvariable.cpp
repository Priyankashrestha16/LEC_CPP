#include<iostream>
using namespace std;
class part{
    private:
    static int count;
    int pid;
    public:
    part(){
        count ++;
        pid=count;
    }
    int getcount(){
        return count;
    }
    void show(){
        cout<<"parts id:"<<pid<<endl;
        cout<<"total number of parts are:"<<count<<endl;
    }
};
int part :: count=0;
int main(){
    part p1,p2;
    cout<<"count is:"<<p1.getcount()<<endl;
    p1.show();
    cout<<"count is:"<<p2.getcount()<<endl;
    p2.show();
    part p3;
    cout<<"count is:"<<p3.getcount()<<endl;
    p3.show();
    cout<<"count is:"<<p1.getcount()<<endl;
    p1.show();
    return 0;
}