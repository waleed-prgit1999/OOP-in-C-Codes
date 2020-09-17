#include <iostream>

using namespace std;
class Int
{
private:
    int x;
public:
    void initial_zero()
    {
        x=0;
    }
    void initial_some(int num)
    {
        x = num;
    }
    void display()
    {
        cout<<"Value of integer is "<<x<<endl;
    }
    void add (Int i1,Int i2)
    {
        x = i1.x + i2.x;
    }
};
int main()
{
 Int i1,i2,i3;
 i1.initial_some(5);
 i2.initial_some(7);
 i3.add(i1,i2);
 i3.display();

}
