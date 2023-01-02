//  Checking if the string is palindrome.cpp
#include<iostream>
using namespace std;

int findLength(string S)
{
    int i;
    for(i=0;S[i]!=0;i++)
    {}
    return i;
}
int checkPalindrome(string S)
{
    int length,i,j;
    length=findLength(S);
    for(i=0,j=length-1;i<j;i++,j--)
    {
        if(S[i]!=S[j])
        {
            return false;
        }
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
