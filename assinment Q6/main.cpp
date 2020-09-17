#include <iostream>

using namespace std;
class date
{
private:
    int day,month,year;
public:
void get_date()
{
    cout<<endl<<"\tenter month"; cin>>month;
    cout<<"\tenter day"; cin>>day;
    cout<<"\tenter year"; cin>>year;
}
void showdate()
{
    cout<<"\t"<<month<<"/"<<day<<"/"<<year<<endl;
}
};
enum etype { laborer, secretary, manager, accountant };

class employee
{
private:
    static int st;
    etype e;
    date d;
    int emp_no;
    float compens;
public:

    void get()
    {
        st++;
        char choice;
        cout<<st<<".)"<<"\tenter the employee number"; cin>>emp_no;
        cout<<"\tenter the employee compensation"; cin>>compens;
        cout<<"\tenter the date of employment"; d.get_date();
        cout<<"\tenter the employee type "<<endl;
        cout<<"\t\tl => Laborer"<<endl;
        cout<<"\t\ts => Secretary"<<endl;
        cout<<"\t\tm => Manager"<<endl;
        cout<<"\t\ta => Accountant";
        cin>>choice;

        switch(choice)
        {
            case 'l': e = laborer; break;
            case 's': e = secretary; break;
            case 'm': e = manager; break;
            case 'a': e = accountant;
        }
    }
    void display()
    {
        cout<<endl<<"Employee number is\t\t"<<emp_no<<endl;
        cout<<"Employee Compensation is\t"<<compens<<endl;
        cout<<"Date of Employment is\t";
        d.showdate();
        switch(e)
        {
            case 0:cout<<"Employee type is                Laborer"<<endl;break;
            case 1:cout<<"Employee type is                Secretary"<<endl;break;
            case 2:cout<<"Employee type is                Manager"<<endl;break;
            case 3:cout<<"Employee type is                Accountant"<<endl;
        }
    }
};
int employee::st=0;
int main()
{
   employee e1,e2,e3;
   e1.get();
   e2.get();
   e3.get();
   e1.display();
   e2.display();
   e3.display();
}
