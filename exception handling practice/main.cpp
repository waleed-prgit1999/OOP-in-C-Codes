#include<iostream>
#include<conio.h>
using namespace std;

void Subtract (int FirstValue, int SecondValue) // start of the function
{ cout<< "inside function subtraction \n";
try // start of the try block
{
    if(FirstValue==0) // throw exception if FirstValue is = 0
        throw FirstValue;
    else cout<< "Subtraction =" <<FirstValue-SecondValue <<endl;
} // end of the try block
catch( int ) // start of the catch block
{
    cout<< "Caught null value \n";
    throw;
} // end of the catch block
cout<< "*** End of Subtract function ***\n \n";
} // end of the function Subtract

int main()// start of the main
{
    cout<<"\ninside fuction main\n";
    try // start of the try block
    {
        Subtract(8, 5); // calling function with (8,5)
        Subtract(0, 8); // calling function with (0,8)
    }// end of the try block
    catch (int ) // start of the catch block
    {
         cout<< "caught null inside main \n";
    } // end of the try block
    cout<< "end of function main\n";

}
