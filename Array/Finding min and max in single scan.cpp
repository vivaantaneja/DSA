//  Finding min and max in single scan
#include<iostream>
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
    int i;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<length;i++)
    {
        cin>>A[i];
    }
    int min,max;
    min=max=A[0];
    for(i=0;i<length;i++)
    {
        if(A[i]<min)
            min=A[i];
        else if(A[i]>max)
            max=A[i];
    }
    cout<<"Min="<<min<<endl<<"Max="<<max<<endl;
    return 0;
}
