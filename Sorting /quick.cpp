#include<iostream>
using namespace std;

//Worst case n^2
//Best case n
//divide and conquer algo
//if median element is taken as pivot -> fastest
int partition(int arr[],int l,int h)
{
    int pat=arr[l];
    int i=l,j=h;
    while(i<j)
    {
        while(arr[i]<=pat)
            i++;
        while(arr[j]>pat)
            j--;
        
        if(i<j)
            swap(arr[i],arr[j]);
    }
    swap(arr[l],arr[j]);
    return j;

}
void quickSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int j=partition(arr,l,h);
        quickSort(arr, l, j);
        quickSort(arr,j+1,h);
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
    
    quickSort(arr,0,n-1);
    print(arr,n);
    
    return 0;
}

