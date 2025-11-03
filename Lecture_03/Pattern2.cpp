// 1
// 01
// 010
// 1010
// 10101


#include <iostream>
using namespace std;

int main()
{    
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int start = 1; 

    for (int i = 1; i <= n; ++i) 
    {
        int temp = start;
        
        for (int j = 1; j <= i; ++j) 
        {
            cout << temp;
            temp = 1 - temp; 
        }
        cout << endl;

        if (i % 2 == 1)
        {
            start = 1 - start;   
        }
    }
}
