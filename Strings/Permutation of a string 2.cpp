//  Permutation of a string 2.cpp
#include<iostream>
using namespace std;

int findLength(string S)
{
    int i;
    for(i=0;S[i]!=0;i++)
    {}
    return i;
}

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void perm(string S, int l,int h)
{
    if(l==h)
    {
        cout<<S;
    }
    else
    {
        int i;
        for(i=l;l<=h;i++)
        {
            swap(S[i],S[l]);
        }
        perm(S,l+1,h);
        swap(S[i],S[l]);
        
    }
}

int main()
{
    string S;
    cout<<"Enter string"<<endl;
    cin>>S;
    int l,h,length;
    length=findLength(S);
    l=0;
    h=length-1;
    perm(S,l,h);
    return 0;
}
