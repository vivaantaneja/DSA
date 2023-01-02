#include<iostream>
using namespace std;

/*
 LOOP ONLY
 
 int main()
{
    float x=1;
    float n=10;
    float i,a=1;
    for(i=n;i>0;i--)
    {
        a=(1+(x/i)*a);
    }
    cout<<a;
    return 0;
}
 
LOOP INSIDE FUNCTION
 
 float e(int x,int n)
 {
    float a=1
    int i;
    float num=1;
    float den=1;
 
    for(i=1;i<=n;i++)
    {
        num=num*x;
        den=den*i;
        a=a+num/den;
    }
    return a;
 }
 
 int main()
 {
     cout<<e(1,10);
     return 0;
 }
 
*/

//USING RECURSION

float e(int x,int n)
{
    static float a=1;
    if(n==0)
        return a;
    a=1+((float)x/n)*a;
    return e(x,n-1);
    
}

int main()
{
    cout<<e(1,10);
    return 0;
    
}
