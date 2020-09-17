#include <iostream>

using namespace std;

class base {
  public:
    base()
    { cout<<"Constructing base \n"; }
    virtual ~base()
    { cout<<"Destructing base \n"; }
};

class derived1: public base {
  public:
    derived1()
    { cout<<"Constructing derived1 \n"; }
    ~derived1()
    { cout<<"Destructing derived1 \n"; }
};

class derived2: public derived1 {
  public:
    derived2()
    { cout<<"Constructing derived2 \n"; }
    ~derived2()
    { cout<<"Destructing derived2 \n"; }
};
int main(void)
{
  derived2 *d2 = new derived2();
  base *b = d2;
  cout<<endl;
  delete b;
  getchar();
  return 0;
}
