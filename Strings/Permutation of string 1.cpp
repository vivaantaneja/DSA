//  Permutation of string 1
#include<iostream>
using namespace std;
int findLength(string S)
{
    int i;
    for(i=0;S[i]!=0;i++)
    {}
    return i;
}

void perm(string S, int k)
{
    static int A[10];
    static string P;
    if(S[k]=='\0')
    {
        P[k]='\0';
        cout<<P;
    }
    else
    {
        int i;
        for(i=0;S[i]!='\0';i++)
        {
            if(A[i]==0)
            {
                P[k]=S[i];
                A[i]=1;
                perm(S,k+1);
                A[i]=0;
            }
        }
    }
       
}
int main()
{
    string S;
    cout<<"Enter string"<<endl;
    cin>>S;
    perm(S,4);
    return 0;
}
