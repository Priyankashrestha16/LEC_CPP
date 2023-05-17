#include <iostream>
using namespace std;
 class student {
    public:
    int age;
    char name[20];
    int rollno;
  
    void assignment(){
        cout<< "assignment complete";
    }
    void attendence(){
        cout<< " present";
    }
 };
 int main (){
    student bipana,leela;
    bipana.assignment();
    bipana.age=20;
    leela.attendence();
    leela.rollno;
    return 0;
 }