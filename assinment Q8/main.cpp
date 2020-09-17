#include <iostream>

using namespace std;
class Count
{
private:
    static int c;
    int serial_no=0;
public:
    Count()
    {
        c++;
        serial_no = c;
    }
    void permit()
    {
        cout<<"I am object no. "<<serial_no<<endl;
    }
};
int Count::c=0;
int main()
{
Count c1,c2,c3;
c1.permit();
c2.permit();
c3.permit();
}
