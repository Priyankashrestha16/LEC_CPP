#include<iostream>
using namespace std;
class matrix
{
    int a[2][2];
    public:
    void getmatrix();
    void display();
    matrix operator -(matrix m);


};
void matrix :: getmatrix(){
    cout<<"Enter matrix:\n";
    for (int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
}
void matrix :: display(){
    for (int i=0;i<2;i++){
    cout<<"\n";
        for(int j=0;j<2;j++)
            cout<<a[i][j]<<"\t";
        }
}
 matrix  matrix ::operator -(matrix m){
   matrix temp;
   for (int i=0;i<2;i++)
    for(int j=0;j<2;j++){
        temp.a[i][j]=a[i][j]-m.a[i][j];
    }

return temp;
}
int main()
{
  matrix m1,m2,m3;
     m1.getmatrix();
     m2.getmatrix();
     m3=m2-m1;
     cout<<"displaying matrix:"<<endl;
     m3.display();

   return 0;
}