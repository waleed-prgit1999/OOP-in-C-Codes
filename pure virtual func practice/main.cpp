#include <iostream>

using namespace std;

class Base
{
    public:
    virtual void disp() = 0;

};
class Derived1 : public Base
{
    public:
    void disp()
    {
        cout<<"hello derived 1"<<endl;
    }
};

class Derived2 : public Derived1
{
    public:
    void disp()
    {
        cout<<"hello derived 2"<<endl;
    }
};
int main()
{
    Base* ptr_base = new Derived2;
    ptr_base->disp();
}
