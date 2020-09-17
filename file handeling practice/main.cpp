#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;
class living
{
    char a;
    public:
    void getdata()
    {
        cout<<"enter a"; cin>>a;
    }
    void putdata()
    {
        cout<<"\ta"<<a;
    }
};

class person
{

    char name[25];
    int age;
    public:
    void getdata()
    {
            cout<<"\n\nEnter Name : ";
            cin>>name;

            cout<<"\nEnter age : ";
            cin>>age;
    }
    void putdata()
    {
        cout<<"\n\t"<<name<<"\t"<<age;
    }
};
class Student : public person, public living
{

    int roll;
    float marks;

    void putdata()
        {
          person :: putdata();
          cout<<"\t"<<roll<<"\t"<<marks;
          living :: putdata();
        }
    void getdata()
        {
            person :: getdata();
            cout<<"\n\nEnter Roll : ";
            cin>>roll;

            cout<<"\nEnter Marks : ";
            cin>>marks;
            living :: getdata();
        }
public:
     void AddRecord()
       {
            fstream f;
            Student Stu;

            f.open("Student.dat",ios::app|ios::binary);
            Stu.getdata();
            f.write( (char *) &Stu, sizeof(Stu) );
            f.close();
        }

    void Display()
        {
          fstream f;
          Student Stu;

          f.open("Student.dat",ios::in|ios::binary);
          cout<<"\n\tRoll\tName\tMarks\n";
          f.read( (char *) &Stu, sizeof(Stu) );
          while( !f.eof())
                {
                    Stu.putdata();
                    f.read( (char *) &Stu, sizeof(Stu) );
                }
                f.close();
        }
};

int main()
{

    Student S;
    S.Display();
              char ch='n';

              do
              {
                      S.AddRecord();

                      cout<<"\n\nDo you want to add another data (y/n) : ";
                      ch = getche();

              } while(ch=='y' || ch=='Y');

              cout<<"\nData written successfully...";



}
