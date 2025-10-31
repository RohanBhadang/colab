// Program to check if a given triangle is valid

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout<<"Enter value of point a : ";
    cin>>a;
    cout<<"Enter value of point b : ";
    cin>>b;
    cout<<"Enter value of point c : ";
    cin>>c;

    if((a + b > c) && (b + c > a) && (c + a > b))  //Triangle ko check karne ki property
    {
        cout<<"It is a Valid Triangle";
    }
    else
    {
        cout<<"Not a Triangle!";
    }

    return 0;
}