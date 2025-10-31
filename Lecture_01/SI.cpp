/* To become good in logic building, it's good practise to make Flowcharts
   and pseudocode.

   Flowchart : 
    A Flowchart is a digrametic representation of your approach.This draws out
    all the steps of your approach in order.

   Pseudocode :
    It is a generic representation of your logic.
*/

// Program to calculate simple Interest
#include <iostream>
using namespace std;

int main()
{
    float P,R,T;

    cout<<"Enter value of P : ";
    cin>>P;
    cout<<"Enter value of R : ";
    cin>>R;
    cout<<"Enter value of T : ";
    cin>>T;

    float SI = (P*R*T) / 100;

    cout<<"Simple Interest : "<<SI<<endl;

    return 0;
}