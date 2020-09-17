#include <iostream>
#include <string.h>
using namespace std;

class strings
{
private:
    char str[50];

public:
    void get_string()
    {
        cout<<"enter the string"<<endl; cin>>str;

    }
    string operator + (strings s)                    ///BINARY OPERATOR OVERLOADING
    {
        strcat(str,s.str);
        strings temp;
        strcpy(temp.str,str);
        return temp.str;
    }
    void display()
    {
        cout<<"string is  "<<str<<endl;
    }
};

int main()
{
    /*strings s1,s2,s3,s4;
    s1.get_string();
    s2.get_string();
    s4.get_string();
    s3 = s1+s2+s4;
    s3.display();*/

}
