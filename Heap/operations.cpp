#include<iostream>
using namespace std;

void insertHeap(int arr[],int n)
{
    int temp, i=n;
    temp=arr[n];
    while(i>1 && temp>arr[i/2])
    {
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=temp;
}

int deleteHeap(int arr[],int n)
{
    int x,i,j,value;
    x=arr[1];
    value=arr[n];
    arr[1]=arr[n];
    arr[n]=x;
    i=1;j=2*i;
    while(j<n-1)
    {
        if(arr[j+1]>arr[j])
            j++;
        if(arr[i]<arr[j])
        {
            swap(arr[i],arr[j]);
            i=j;
            j=2*i;
        }
        else
            break;
    }

    return value;
}
void print(int arr[],int n)
{
    for(int i=0 ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void createHeap(int arr[],int n)
{
    int i;
    for(i=2;i<=7;i++)
    {
        insertHeap(arr,i);
    }
    print(arr, i);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    //0,10,20,30,25,5,40,35
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    createHeap(arr,n); //40 25 35 10 5 20 30
    int d=deleteHeap(arr, n); //35 25 30 10 5 20
    cout<<d<<endl;
    print(arr,n);
    return 0;
}
