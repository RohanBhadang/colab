/*
    Loops :
     A loop in programming is a sequence of instructions that is executed
     repeatedly until a specific condition is true(or false), reducing code
     repetition and improving efficiency.

     In simpler words, It executes the same code again and again without
     writing it multiple times.
*/

// Write a program to print numbers from 1 to n

# include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter a number : ";
    cin>>n;

    for(int i = 1;i <= n; i++)
    {
        cout<<i<<endl;
    }

    return 0;
}