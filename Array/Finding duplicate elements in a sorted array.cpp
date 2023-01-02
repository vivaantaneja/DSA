//  Finding duplicate elements in an sorted array
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
    cout<<"Enter the elements"<<endl;
    int i,j;
    for(i=0;i<length;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<length-1;i++)
    {
        if(A[i]==A[i+1])
        {
            j=i+1;
            while(A[i]==A[j])
            {j++;}
            cout<<A[i]<<" is repeated "<<j-i<<" times"<<endl;
            i=j-1;
        }
    }
    return 0;
        
}
