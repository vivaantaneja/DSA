#include<iostream>
using namespace std;

//stable
//adaptive
//all cases complexity in n^2
void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

//Worst case n^2
//Best case n
void bubbleSortOpt(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag=false;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag==true)
        {
            break;
        }
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
    
    bubbleSort(arr, n);
    print(arr,n);
    
    return 0;
}
