//  Find a pair with sum k in sorted array
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
    int i,j,k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<length;i++)
    {
        cin>>A[i];
    }
    for(i=0,j=length-1;i<j;)
    {
        if(A[i]+A[j]>k)
            j--;
        else if(A[i]+A[j]<k)
            i++;
        else if(A[i]+A[j]==k)
        {
            cout<<"The pair that makes the sum "<<k<<" is: "<<A[i]<<","<<A[j]<<endl;
            i++;j--;
        }
    }
    return 0;
}
