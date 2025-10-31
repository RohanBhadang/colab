// Write a program to check if n is prime

#include <iostream>
using namespace std;

int main()
{
    int n, num = 2;

    cout<<"Enter a number : ";
    cin>>n;

    while (num < n)
    {
        if (n % 2 == 0)
        {
            cout<<"Not prime";
            break;
        }
        else
        {
            num++;
        }
    }

    if(num == n)
    {
        cout<<"Prime";
    }

    return 0;
}