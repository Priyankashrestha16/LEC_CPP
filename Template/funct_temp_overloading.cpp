#include<iostream>
#include<cstring>
using namespace std;
template<class T>
T findmax(T a,T b){
    T result;
    if(a>b)
    result =a;
    else 
    result =b;
    return result;
}
char *findmax(char * a,char * b){
    char * result;
    if(strcmp(a,b)>0)
    result =a;
    else 
    result =b;
    return result;
}
int main(){
    int i1=3,i2=4;
    cout<<"greater is:"<<findmax(i1,i2)<<endl;
    char c1='w',c2='r';
    cout<<"greater is:"<<findmax(c1,c2)<<endl;
    char str1[]="apple",str2[]="juice";
    cout<<"greater is:"<<findmax(str1,str2)<<endl;
    return 0;
}