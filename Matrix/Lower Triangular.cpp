#include<iostream>
using namespace std;
int main()
{
    int max;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>max;
    int size=max*(max+1)/2;
    int i,j,k=0;
    int a[size];
    cout<<"Enter elements to be entered (row major)"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Upper Triangular Matrix"<<endl;
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            if(i>=j)
            {
                cout<<a[k]<<" ";
                k++;
            }
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
    return 0;
    
}
