#include <iostream>

using namespace std;
class angle
{
private:
    int deg;
    float minute;
    char dir;
public:
    angle ()
    {

    }
    angle(int degr,float minu,char dire)
    {
        deg = degr;
        minute = minu;
        dir = dire;
    }
    void get()
    {
        cout<<"enter the degrees"<<endl; cin>>deg;
        cout<<"enter the minutes"<<endl; cin>>minute;
        cout<<"enter the direction"<<endl; cin>>dir;
    }
    void display()
    {
        cout<<deg<<'\xF8'<<minute<<"' "<<dir<<endl;
    }
};

int main()
{
    int counter;
   angle a1(12,23.45,'E');
   a1.display();

   cout<<"How many angles you want to enter"<<endl;
   cin>>counter;

   angle  a[counter];
   for(int i=0;i<counter;i++)
   {
       cout<<"Angle "<<i+1<<endl;
       a[i].get();
   }
cout<<endl<<"Here is what you entered"<<endl;

   for(int i=0;i<counter;i++)
   {
       a[i].display();
   }
}
