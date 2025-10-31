// Write a program to print all odd numbers from 1 to n (inclusive)

#include <iostream>
using namespace std;

int main()
{
    int n, num = 1;

    cout<<"Enter a number : ";
    cin>>n;

    while(num <= n)
    {
        cout<<num<<endl;
        num = num + 2;
    }

    return 0;
}