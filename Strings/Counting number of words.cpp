//  Counting number of words.cpp
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string S;
    cout<<"Enter a sentence"<<endl;
    getline(cin,S);
    int count=0;
    for(int i=0;S[i]!='\0';i++)
    {
        if(S[i]==' ' && S[i]!=S[i-1])
        {
            count++;
        }
        
    }
    cout<<"The number of words are: "<<count+1<<endl;
    return 0;
    
}
