//  Checking if a string is anagram
#include <iostream>
using namespace std;
int main()
{
    string S1;
    cout<<"Enter string 1"<<endl;
    cin>>S1;
    string S2;
    cout<<"Enter string 2"<<endl;
    cin>>S2;
    int H[26];
    int i,j;
    for(i=0;i<26;i++)
    {
        H[i]=0;
    }
    for(i=0;S1[i]!='\0';i++)
    {
        H[S1[i]-97]++;
    }
    for(i=0;S2[i]!='\0';i++)
    {
        H[S2[i]-97]--;
    }
    for(j=0;j<26;j++)
    {
        if(H[j]!=0)
        {
            cout<<"Not an anagram"<<endl;
            break;
        }
    }
    if(H[i]=='\0')
        cout<<"Anagram"<<endl;
    return 0;
    
    
}
