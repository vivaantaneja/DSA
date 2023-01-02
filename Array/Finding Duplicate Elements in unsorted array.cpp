//  Finding Duplicate Elements in unsorted array
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
    int i,j;
    for(i=0;i<length;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<length-1;i++)
    {
        int count=1;
        if(A[i]!=-1)
        {
            for(j=i+1;j<length;j++)
            {
                if(A[j]==A[i])
                {
                    count++;
                    A[j]=-1;
                }
            }
            if(count>1)
            cout<<A[i]<<" is repeated "<<count<<" times"<<endl;
        }
        
    }
    return 0;
}
