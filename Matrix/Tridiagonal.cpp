#include<iostream>
using namespace std;
int main()
{
    int max;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>max;
    int size=(3*max-2);
    int i,j,arr[size],k=0;
    cout<<"Enter the diagonal elements"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Diagonal Matrix"<<endl;
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            if(i-j==0||i-j==1||i-j==-1)
            {
                cout<<arr[k]<<" ";
                k++;
            }
            else
                cout<<"0 ";
            
        }
        cout<<endl;
    }
    return 0;
}
