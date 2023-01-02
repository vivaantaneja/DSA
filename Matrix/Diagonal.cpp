#include<iostream>
using namespace std;
int main()
{
    int max;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>max;
    int i,j,arr[max];
    cout<<"Enter the diagonal elements"<<endl;
    for(i=0;i<max;i++)
    {
        cin>>arr[i];
    }
    cout<<"Diagonal Matrix"<<endl;
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            if(i==j)
                cout<<arr[i]<<" ";
            else
                cout<<"0 ";
            
        }
        cout<<endl;
    }
    return 0;
}
