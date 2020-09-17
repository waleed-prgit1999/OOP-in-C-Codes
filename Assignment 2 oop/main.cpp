#include <iostream>
#include <string>

using namespace std;
class bMoney
{
    long double money;
public:
    bMoney(){}
    bMoney(string str_mon)
    {
        money = stold(str_mon);
    }
    void get_money()
    {
        cout<<"enter the money"<<endl; cin>>money;
    }
    void disp_money()
    {
        cout<<money<<endl;
    }
    bMoney operator + (bMoney b)
    {
         bMoney temp;
         temp.money = money + b.money;
         return temp;
    }
    bMoney operator - (bMoney b)
    {
         bMoney temp;
         temp.money = money - b.money;
         return temp;
    }
    bMoney operator * (long double b)
    {
         bMoney temp;
         temp.money = money * b;
         return temp;
    }
    long double operator / (bMoney b)
    {
         long double temp;
         temp = money / b.money;
         return temp;
    }
    bMoney operator / (long double b)
    {
        bMoney temp;
        temp.money = money / b;
        return temp;
    }
};
int main()
{
while(1)
{
    string A,B;
    long double fl;
    int choice;
    cout<<endl<<endl<<"\t1)  Proceed Further "<<endl;
    cout<<"\t2)  Exit Program "<<endl;
    cout<<"\tEnter your choice "<<endl;
    cin>>choice;

    if(choice == 1)
    {
        cout<<"enter the money string 1"<<endl; cin>>A;
        cout<<"enter the money string 2"<<endl; cin>>B;
        cout<<"enter the floating point number"<<endl; cin>>fl;

        bMoney b1(A),b2(B),b3,b4,b5,b6;
        b3 = b1 + b2;
        b4 = b1 - b2;
        b5 = b1*fl;
        long double temp = b1/b2;
        b6 = b1/fl;

        cout<<"\t\tstring1 + string2  =  ";
        b3.disp_money();
        cout<<"\t\tstring1 - string2  =  ";
        b4.disp_money();
        cout<<"\t\tstring1 * float number  =  ";
        b5.disp_money();
        cout<<"\t\tstring1 / string2  =  "<<temp<<endl;
        cout<<"\t\tstring1 / float number  =  ";
        b6.disp_money();
    }
    else
        return 0;
}
}
