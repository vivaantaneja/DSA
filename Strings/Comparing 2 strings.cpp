//  Comparing 2 strings
#include<iostream>
using namespace std;
int main()
{
    string A,B;
    cout<<"Enter string 1"<<endl;
    cin>>A;
    cout<<"Enter string 2"<<endl;
    cin>>B;
    int i,j;
    for(i=0,j=0;A[i]!='\0' && B[j]!='\0';i++,j++)
    {
        if(A[i]!=B[j])
            break;
    }
    if(A[i]>B[j])
        cout<<"String 1 is greater"<<endl;
    else if(A[i]<B[j])
        cout<<"String 2 is greater"<<endl;
    else if(A[i]==B[j])
        cout<<"Both are same"<<endl;
    
    return 0;
}
