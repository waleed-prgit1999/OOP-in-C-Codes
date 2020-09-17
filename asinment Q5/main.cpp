#include <iostream>

using namespace std;

class date
{
private:
    int day,month,year;
public:
void get_date()
{
    cout<<"enter month"<<endl; cin>>month;
    cout<<"enter day"<<endl; cin>>day;
    cout<<"enter year"<<endl; cin>>year;
}
void showdate()
{
    cout<<endl<<month<<"/"<<day<<"/"<<year<<endl;
}
};
int main()
{
   date d1;
   d1.get_date();
   d1.showdate();
}
