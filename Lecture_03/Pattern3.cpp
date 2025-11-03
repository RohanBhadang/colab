// 1
// 12
// 123
// 1234
// 12345

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter a number : ";
    cin>>n;
    
    int i = 1;
    
    while(i <= n)
    {
        int j = 1;
        
        while (j <= i)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}
