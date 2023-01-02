#include<iostream>
using namespace std;

void reverse(int a[10])
{
    int i,temp;
    for(i=0;(i=9-i);i++)
    {
        temp=a[i];
        a[i]=a[9-i];
        a[9-i]=temp;
    }
}

int main()
{
    int i,a[10],j,k;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"BEFORE"<<endl;
    for(j=0;j<10;j++)
    {
        cout<<a[j]<<endl;
    }
    reverse(a);
    cout<<"AFTER"<<endl;
    for(k=0;k<10;k++)
    {
        cout<<a[k]<<endl;
    }
    return 0;
}
