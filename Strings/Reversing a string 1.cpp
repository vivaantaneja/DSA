//  Reversing a string 1
#include<iostream>
using namespace std;
int findLength(string S)
{
    int i;
    for(i=0;S[i]!=0;i++)
    {}
    return i;
}
int main()
{
    string S;
    int length,i,j;
    cout<<"Enter string"<<endl;
    cin>>S;
    length=findLength(S);
    for(i=0,j=length-1;i<j;i++,j--)
    {
        int temp;
        temp=S[i];
        S[i]=S[j];
        S[j]=temp;
    }
    cout<<"Reverse string"<<endl<<S<<endl;
    return 0;
}
