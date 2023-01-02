//  Finding multiple missing elements 2
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size"<<endl;
    cin>>size;
    int A[size];
    cout<<"Enter length"<<endl;
    int length;
    cin>>length;
    cout<<"Enter the elements"<<endl;
    int i;
    for(i=0;i<length;i++)
    {
        cin>>A[i];
    }
    int l,h,diff;
    cout<<"Enter the lowest number entered"<<endl;
    cin>>l;
    cout<<"Enter the highest number entered"<<endl;
    cin>>h;
    diff=l;
    int B[h];
    for(i=0;i<=h;i++)
    {
        B[i]=0;
    }
    for(int i=0;i<length;i++)
    {
        B[A[i]]=1;
    }
    for(i=0;i<=h;i++)
    {
        if(B[i]==0 && i!=0)
            cout<<"The missing number is: "<<i<<endl;
    }
    return 0;
}
