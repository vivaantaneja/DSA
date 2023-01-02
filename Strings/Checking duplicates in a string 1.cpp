//  Checking duplicates in a string 1
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
    cout<<"Enter string"<<endl;
    cin>>S;
    int i,j;
    int length=findLength(S);
    for(i=0;i<length-1;i++)
    {
        int count=1;
        if(S[i]!=-1)
       {
            for(j=i+1;j<length;j++)
            {
                if(S[j]==S[i])
                {
                    count++;
                    S[j]=-1;
                }
            }
        }
           if(count>1)
           cout<<S[i]<<" is repeated "<<count<<" times"<<endl;
    }
    return 0;
}
