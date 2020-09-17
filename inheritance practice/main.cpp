#include <iostream>

using namespace std;
class A
{
private:
    int x;
public:
    int y;
    void chance()
    {
        x=3;
        cout<<x;
    }
};

class B:public A
{
private:

public:

};
int main()
{
    B b1;
    b1.chance();
}
