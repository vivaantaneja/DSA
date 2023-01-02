#include<iostream>
using namespace std;
int main()
{
    int max;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>max;
    int size=max*(max+1)/2;
    int i,j;
    int a[size];
    cout<<"Enter elements to be entered (row major)"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Symmetric Matrix"<<endl;
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            if (i <= j)
            {
                cout << a[i * max - (i - 1) * (i / 2) + j - i] << " ";
            }
            else
            {
                cout << a[j * max - (j - 1) * (j / 2) + i - j] << " ";
            }
        }
        cout<<endl;
    }
    return 0;
    
}
