// To check if n is even or odd

/*
    Modulus Operator (%) : 
     It gives us the remainder when we divide two numbers.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter a number : ";
    cin>>n;

    if(n % 2 == 0)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }

    return 0;
}