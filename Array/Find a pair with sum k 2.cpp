//  Find a pair with sum k 2
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
    int i,k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    cout<<"Enter the elements"<<endl;
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
        if(B[k-A[i]]==1)
        {
            cout<<"The pair that makes the sum "<<k<<" is: "<<k-A[i]<<","<<A[i]<<endl;
        }
        B[A[i]]++;
    }
}
