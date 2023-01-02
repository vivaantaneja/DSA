//  Counting number of vowels and consonants
#include <iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter a word"<<endl;
    cin>>name;
    int c_count=0,v_count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        {
            v_count++;
        }
        else if((name[i]>=65 && name[i]<=90)||(name[i]>=97 && name[i]<=122))
        {
            c_count++;
        }
    }
    cout<<"Number of vowels: "<<v_count<<endl<<"Number of consonants: "<<c_count<<endl;
    return 0;
}
