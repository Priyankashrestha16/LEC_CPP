#include<iostream>
using namespace std;
class course
{
    public:
    char name_course[10];

    void getdata(){
        cout<<"Name of course:"<<endl;
        cin>>name_course;
     }
};
class mathematics : public course{
     public:
     int no_student;
     void getdata(){
        course :: getdata();
        cout<<"Enter number of students in mathematics:"<<endl;
        cin>>no_student;
     }
};
  class physics{
    public:
    int m1;
    void getdata(){
      cout<<"Enter marks of physics:"<<endl;
      cin>>m1;
    }
};
class chemistry :public mathematics{
    public:
    int m2;
    void getdata(){
    mathematics ::getdata();
        cout<<"Enter marks of chemistry:"<<endl;
        cin>>m2;
    }
};
class science : public physics,public chemistry{
    public:
    int no_student;
    void getdata(){
      chemistry :: getdata();
      physics :: getdata();
       cout<<"Enter number of students in science:"<<endl;
      cin>>no_student;
    }
};
class Engineering : public science{
    public:
   int no_student;
   void getdata(){
     science  :: getdata();
    cout<<"Enter number of students in engineering:"<<endl;
    cin>>no_student;
   }
};
int main()
{  Engineering e1;
   e1.getdata();
   return 0;
}