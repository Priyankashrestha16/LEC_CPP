#include<iostream>
#define MAX 2
using namespace std;
class stack
{
    protected:
    int s[MAX];
    int top;     //stack position
    public:
    class FULL{};
    class EMPTY{};
    stack(){
        top=-1;
    }
    void push(int x){
        if(top==MAX-1)
        throw FULL();
        else
        s[++top]=x;
    }
    int pop(){
        if(top==-1)
        throw EMPTY();
        else
        return s[top--];
    }
};
int main()
{
    stack s;
    try{
    
        cout<<"\n number popped:"<<s.pop();
        cout<<"\n number popped:"<<s.pop();
        cout<<"\n number popped"<<s.pop();

    }
    catch(stack:: FULL){
        cout<<"\nException: stack is full"<<endl;
    }
    catch(stack::EMPTY){
        cout<<"\n Exception : stcak is empty"<<endl;        
        
    }
   return 0;
}