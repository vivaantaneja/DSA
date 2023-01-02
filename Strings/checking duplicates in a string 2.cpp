//  checking duplicates in a string 2.cpp
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
    int H[26];
    int i;
    for(i=0;i<26;i++)
    {
        H[i]=0;
    }
    cout<<"Enter string in lower case"<<endl;
    cin>>S;
    int length=findLength(S);
    for(i=0;i<length;i++)
    {
        H[S[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        char c;
        if(H[i]>1)
        {
            c=i+97;
            cout<<c<<" is repeated "<<H[i]<<" times"<<endl;
        }
    }
    return 0;
}
