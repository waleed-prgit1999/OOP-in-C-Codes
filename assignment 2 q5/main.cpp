#include <iostream>

using namespace std;

enum etype {Hourly,Weekly,Monthly};
class compensation
{
    double comp;
    etype period;
public:
    char choice;
    void get_comp()
    {
        cout<<"Enter the Compensation of the employee "; cin>>comp;
        cout<<"Enter the period of Compensation "<<endl<<"h for Hourly"<<endl<<"w for Weekly"<<endl<<"m for Monthly"<<endl; cin>>choice;
        switch (choice)
        {
            case 'h': period = Hourly; break;
            case 'w': period = Weekly; break;
            case 'm': period = Monthly; break;
            default : cout<<"Choice out of scope "<<endl;
        }
    }
    void put_comp()
    {
        cout<<"Compensation of the employee is "<<comp<<endl;
        switch (period)
        {
            case 0: cout<<"Period of Compensation is Hourly"<<endl; break;
            case 1: cout<<"Period of Compensation is Weekly"<<endl; break;
            case 2: cout<<"Period of Compensation is Monthly"<<endl; break;

        }
    }
};
class employee2
{
    compensation c1;
public:
    void get_comp()
    {
        c1.get_comp();
    }
    void put_comp()
    {
        c1.put_comp();
    }
};
class employee : public employee2
{
    char name[80];
    unsigned long number;
public:
    void get_data()
    {
        cout<<"Enter the Employee Name "; cin>>name;
        cout<<"Enter the Employee Number "; cin>>number;
        get_comp();
    }

    void put_data()
    {
        cout<<"Name "<<name<<endl;
        cout<<"Number "<<number<<endl;
        put_comp();
    }
};
class manager : public employee
{
  char title[80];
  double dues;
public:
    void get_data()
     {
        employee :: get_data();
        cout<<"Enter Title:  "; cin>>title;
        cout<<"Enter Dues:  "; cin>>dues;
     }
     void put_data()
     {
         employee :: put_data();
         cout<<"Title:  "<<title<<endl;
         cout<<"Dues:  "<<dues<<endl;
     }
};
class scientist : public employee
{
  int pubs;
public:
    void get_data()
     {
        employee :: get_data();
        cout<<"Enter number of Publications:  "; cin>>pubs;
     }
     void put_data()
     {
         employee :: put_data();
         cout<<"Number of Publications:  "<<pubs<<endl;
     }
};
class labourer : public employee
{
};
int main()
{
    manager m1;
    scientist s1;
    labourer l1;

    cout<<"\tEnter the data of Manager "<<endl;
    m1.get_data();

    cout<<endl<<endl<<"\tEnter the data of Scientist "<<endl;
    s1.get_data();

    cout<<endl<<endl<<"\tEnter the data of Laborer "<<endl;
    l1.get_data();

    cout<<endl<<endl<<endl<<endl<<"\tData of Manager: "<<endl;
    m1.put_data();
    cout<<endl<<endl<<"\tData of Scientist: "<<endl;
    s1.put_data();
    cout<<endl<<endl<<"\tData of Laborer: "<<endl;
    l1.put_data();

}
