#include<iostream>
using namespace std;
class person
{
    protected:
    char name[20];
    char address[12];

 public:
 void getdata(){
    cout<<"enter the name:"<<endl;
    cin>>name;
    cout<<"enter addrtess:"<<endl;
    cin>>address;
 }
 void showdata(){
    cout<<"Name:"<<name<<endl;
    cout<<"Address:"<<address<<endl;
 }
};
class employee : public person{
    protected:
    int salary;

    public:
    void getdata(){
        person :: getdata();
        cout<<"Enter salary:"<<endl;
        cin>>salary;
    }
    void showdata(){
        person ::showdata();
        cout<<"Salary:"<<salary<<endl;

        }
    };
    class manager :public employee{
        protected:
        char idno;

        public:
        void getdata(){
            employee ::getdata();
            cout<<"enter id no:"<<endl;
            cin>>idno;
        }
        void showdata(){
            employee :: showdata();
          cout<<"IDno"<<idno<<endl;
            }
        };


int main()
{
    manager m1;
    m1.getdata();
    m1.showdata();
   return 0;
}