#include<iostream>
using namespace std;

//Worst case n^2
//Best case n
//stable
//adaptive
//in place online comparison algo
//not suitable for large data sets
void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j;
        for(j=i;j>0 && arr[j-1]>temp;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[j]=temp;
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
    
    insertionSort(arr, n);
    print(arr,n);
    
    return 0;
}

