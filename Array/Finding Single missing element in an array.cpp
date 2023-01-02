//  Finding Single missing element in an array
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size"<<endl;
    cin>>size;
    int A[size];
    cout<<"Enter length"<<endl;
    int length;
    cin>>length;
    cout<<"Enter the elements"<<endl;
    int i;
    for(i=0;i<length;i++)
    {
        cin>>A[i];
    }
    int l,h,diff;
    l=A[0];
    h=A[length-1];
    diff=l;
    for(i=0;i<length;i++)
    {
        if(A[i]-i!=diff)
        {
            cout<<"Missing number is: "<<i+diff<<endl;
            break;
        }
            
    }
    return 0;
}
