//C++ objects as physical objects

#include <iostream>
#include<cstring>
using namespace std;
class product{
    private:
    int productid;
    char name[20];
    float cost;
    public:
    void setdata(int pid,char pname[],float cst)
    {
        productid =pid;
        strcpy(name,pname);
        cost=cst;

    }

    void showdata()
    {
        cout<<"Product Id:"<< productid<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"cost:"<<cost<<endl;
    }

};
int main()
{
    product p1,p2;
    p1.setdata(944,"Cd-ROM",1500.00);
    p2.setdata(845,"Pen drive",1000.00);
    p1.showdata();
    p2.showdata();
    return 0;
}