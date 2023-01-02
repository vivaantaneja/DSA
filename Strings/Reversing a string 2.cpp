//  Reversing a string 2.cpp
#include<iostream>
using namespace std;
int findLength(char S[10])
{
    int i;
    for(i=0;S[i]!=0;i++)
    {}
    return i;
}
int main()
{
    char S[10];
    int length,i,j;
    cout<<"Enter string"<<endl;
    cin>>S;
    length=findLength(S);
    char R[7];
    for(i=length-1,j=0;i>=0;i--,j++)
    {
        R[j]=S[i];
    }
    R[j]='\0';
    cout<<"Reverse string"<<endl<<R<<endl;
    return 0;
}
