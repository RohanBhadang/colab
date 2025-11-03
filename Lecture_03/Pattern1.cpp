// 1
// 10
// 101
// 1010
// 10101

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter a number : ";
    cin>>n;
    
    int i = 1;
    
    while (i <= n)
    {
        int j = 1;
        
        while(j <= i)
        {
            if (j % 2 == 0)
            {
                cout<<"0";
            }
            else
            {
                cout<<"1";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}