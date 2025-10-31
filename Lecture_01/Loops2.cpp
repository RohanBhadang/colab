// Program to print even numbers between 1 and n (exclusive)

# include <iostream>
using namespace std;

int main()
{
    int n, num = 2;

    cout<<"Enter a number : ";
    cin>>n;

    while(num < n)
    {
        cout<<num<<endl;
        num = num + 2;
    }

    return 0;
}