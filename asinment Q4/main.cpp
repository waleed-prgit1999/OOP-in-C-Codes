#include <iostream>

using namespace std;

class employee
{
private:
    int emp_no;
    float compens;
public:
    void get()
    {
        cout<<"enter the employee number"<<endl; cin>>emp_no;
        cout<<"enter the employee compensation"<<endl; cin>>compens;cout<<endl;
    }
    void display()
    {
        cout<<"Employee number is "<<emp_no<<endl;
        cout<<"Employee Compensation is "<<compens<<endl;
    }
};
int main()
{
   employee e1,e2,e3;
   e1.get();
   e2.get();
   e3.get();
   e1.display();
   e2.display();
   e3.display();
   return 0;
}
