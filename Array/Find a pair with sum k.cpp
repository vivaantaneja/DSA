//  Find a pair with sum k
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
    for(i=0;i<length-1;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(A[i]+A[j]==k)
            {
                cout<<"The pair that makes the sum "<<k<<" is: "<<A[i]<<","<<A[j]<<endl;
                break;
            }
        }
    }
    return 0;
}
