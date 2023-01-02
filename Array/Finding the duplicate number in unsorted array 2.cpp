//  Finding the duplicate number in unsorted array 2
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
    int h;
    cout<<"Enter the highest number entered"<<endl;
    cin>>h;
    int B[h];
    for(i=0;i<=h;i++)
    {
        B[i]=0;
    }
    for(i=0;i<length;i++)
    {
        B[A[i]]++;
    }
    for(i=0;i<=h;i++)
    {
        if(B[i]>1)
        cout<<i<<" is repeated "<<B[i]<<" times"<<endl;
    }
    return 0;
}
