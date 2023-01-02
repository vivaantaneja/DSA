#include<iostream>
using namespace std;

//Worst case n^2
//Best case n
//stable
//divide and conquer algo
// steps -> 1. Divide 2. Conquer (recursive sort sub arrays) 3. Combine
// space complexity = o(2n+nlogn)
void merge(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int B[100];
    
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
        {
            B[k++]=A[i++];
        }
        else
        {
            B[k++]=A[j++];
        }
    }
    
    for(;i<=mid;i++)
    {
        B[k++]=A[i];
    }
    for(;j<=h;j++)
    {
        B[k++]=A[j];
    }
    
    for(i=l;i<=h;i++)
    {
        A[i]=B[i];
    }
        
}
void mergeSort(int A[],int l,int h)
{
    /*int p,l,mid,h;
    for(p=2;p<=n;p=p*2)
    {
        for(int i=0;i+p-1<n;i=i+p)
        {
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            merge(A,l,mid,h);
        }
    }
    if(p/2<n)
        merge(A,0,p/2-1,n-1);*/
    if(l<h)
    {
        int mid=(l+h)/2;
        mergeSort(A,l,mid);
        mergeSort(A,mid+1,h);
        merge(A,l,mid,h);
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
    
    mergeSort(arr,0,n-1);
    print(arr,n);
    
    return 0;
}

