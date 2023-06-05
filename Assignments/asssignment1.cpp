#include <iostream>
using namespace std;
class Book{
    public:
    char Title [20];
    int price ;

    void getdata(){
        cout <<"enter the title of the book:";
        cin>>Title;
        cout <<"enter the price of the book:";
        cin>>price;
    }
    void showdata();
};
  void Book::showdata(){
  cout<<"TITLE:"<<Title<<endl;
  cout<<"PRICE:"<<price<<endl;
   }
int main(){
    Book b1;
    b1.getdata();
    b1.showdata();
    return 0;

}