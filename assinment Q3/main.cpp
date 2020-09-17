#include <iostream>

using namespace std;
class time
{
private:
    int hours,minutes,seconds;
public:
    time()
    {
        hours=minutes=seconds=0;
    }
    time(int h,int m,int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display() const
    {
        cout<<"The Time is "<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
    void add(time t1, time t2)
    {
        hours = t1.hours + t2.hours;
        minutes = t1.minutes + t2.minutes;
        seconds = t1.seconds + t2.seconds;
        if(seconds >= 60)
        {
            minutes += seconds/60;
            seconds = seconds%60;
        }
        if(minutes >= 60)
        {
            hours += minutes/60;
            minutes = minutes%60;
        }

    }
};
int main()
{
    time t1(12,34,45);
    time t2(10,27,55);
    time t3;
    t3.add(t1,t2);
    t3.display();
}
