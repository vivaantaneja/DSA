#include<iostream>
using namespace std;

//o(n+k) k-> integer
//fastest index bases sorting
//space complexity is very high
void countSort(int A[],int n,int k)
{
    int hash[k];
    for(int i=0;i<k;i++)
    {
        hash[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        hash[A[i]]++;
    }
    int i=0,j=0;
    while(i<k)
    {
        if(hash[i]>0)
        {
            A[j++]=i;
            hash[i]--;
        }
        else
            i++;
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    countSort(arr,n,9);
    print(arr,n);
    
    return 0;
}

