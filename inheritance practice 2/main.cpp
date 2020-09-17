#include <iostream>

using namespace std;
class A
{
public:
    int y;
};

class B:private A
{
private:

public:
void pritn_y                    ///now the y is seems to appear int the private of class B
{
    y=0
    cout<<"y = "<<y;
}
};
int main()
{
    B b1;
    b1.print_y();
}
