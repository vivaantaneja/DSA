//  Validate a string.cpp
#include <iostream>
using namespace std;

int validate(string S)
{
    for(int i=0;S[i]!='\0';i++)
    {
        if((!(S[i]>=65 && S[i]<=90))&&(!(S[i]>=97 && S[i]<=122))&&(!(S[i]>=48 && S[i]<=57)))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string S;
    cout<<"Enter a string of numbers and letters"<<endl;
    cin>>S;
    if(validate(S))
    {
        cout<<"Valid"<<endl;
    }
    else
    {
        cout<<"Invalid"<<endl;
    }
    return 0;
}
