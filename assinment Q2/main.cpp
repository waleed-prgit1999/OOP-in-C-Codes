#include <iostream>

using namespace std;
class tollBooth
{
private:
    unsigned int tot_cars;
    double tot_mon;
public:
    tollBooth()
    {
        tot_cars = tot_mon =0;
    }
    void payingCar()
    {
        tot_cars++;
        tot_mon += 0.5;
    }
    void nopayCar()
    {
        tot_cars++;
    }
    void display()
    {
        cout<<"Total number of cars are "<<tot_cars<<endl;
        cout<<"Total amount of money is "<<tot_mon<<endl;
    }
};
int main()
{
    tollBooth t;
    int choice;
    while(1)
    {
        cout<<endl<<"\t 1.) Key for counting a paying car"<<endl;
        cout<<"\t 2.) Key for counting a non paying car"<<endl;
        cout<<"\t 3.) Key for printing the record and exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1:
            t.payingCar();
            break;
        case 2:
            t.nopayCar();
            break;
        case 3:
            t.display();
            return 0;

        }
    }

}
