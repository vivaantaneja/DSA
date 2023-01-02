//  Changing the case of string
#include<iostream>
using namespace std;
void upperToLower()
{
    string name;
    cout<<"Enter your name in upper case"<<endl;
    cin>>name;
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        name[i]=name[i]+32;
    }
    cout<<"Name: "<<name<<endl;
}
void lowerToUpper()
{
    string name;
    cout<<"Enter your name in lower case"<<endl;
    cin>>name;
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        name[i]=name[i]-32;
    }
    cout<<"Name: "<<name<<endl;
}
void Toggle()
{
    string name;
    cout<<"Enter your name in mixed case"<<endl;
    cin>>name;
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>=65 && name[i]<=90)
            name[i]=name[i]+32;
        else if(name[i]>=97 && name[i]<=122)
            name[i]=name[i]-32;
    }
    cout<<"Name: "<<name<<endl;
}
int main()
{
    upperToLower();
    lowerToUpper();
    Toggle();
    return 0;
}
