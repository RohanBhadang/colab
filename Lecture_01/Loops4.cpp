// Write a program to find sum from 1 to n

# include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, num = 1;

    cout<<"Enter a number : ";
    cin>>n;

    while(num <= n)
    {
        sum = sum + num;
        num++;
    }

    cout<<"The sum from 1 to "<<n<<" is : "<<sum;

    return 0;
}