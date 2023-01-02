//  Checking if a string is palindrome 2.cpp
#include<iostream>
using namespace std;

int findLength(string S)
{
    int i;
    for(i=0;S[i]!=0;i++)
    {}
    return i;
}

string Reverse(string S)
{
    int length=findLength(S);
    for(int i=0,j=length-1;i<j;i++,j--)
    {
        int temp;
        temp=S[i];
        S[i]=S[j];
        S[j]=temp;
    }
    return S;
}

int checkPalindrome(string S)
{
    int i,j;
    string R=Reverse(S);
    for(i=0,j=0;(S[i]!='\0' && R[i]!='\0');i++,j++)
    {
        if(S[i]!=R[j])
            return false;
    }
    return true;
}
int main()
{
    string S;
    cout<<"Enter string"<<endl;
    cin>>S;
    if(checkPalindrome(S))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not a Palindrome"<<endl;
    return 0;
}
