#include<iostream>
using namespace std;
class DAYEAR{};
class MONTHERR{};
class YEARERR{};
class Date
{
    private:
    int day,month ,year;
    public:
    void read_date() ;  
    void show_date();
    };
    void Date:: read_date() {
        cout<<"enter day:";
        cin>>day;
        if (day>31)
        throw DAYEAR();
        cout<<"enter month:";
        cin>>month;
        if(month>12)
        throw MONTHERR();
        cout<<"enter year:";
        cin>>year;
        if(year<0)
        throw YEARERR();
    }
    void Date:: show_date(){
    cout<<"Date of birth is:"<<day<<"/"<<month<<"/"<<year;
    }

int main()
{
    Date d1;
    try{
        cout<<"Enter your date of birth"<<endl;
        d1.read_date();
        d1.show_date();
    }
    catch(DAYEAR){
        cout<<"Exception:day cannot be greater than 31";
    }
    catch(MONTHERR){
        cout<<"Exception:month cannot be greater than 12";
    }
    catch (YEARERR){
        cout<<"Exception:year cannot be negative";
    }
       return 0;
}