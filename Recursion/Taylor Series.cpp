#include<iostream>
using namespace std;
float e(int x,int n)
{
    static float p=1,f=1;
    float r;
    if(n==0)
        return 1;
    r=e(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}

int main()
{
    cout<<e(1,10);
    return 0;
}
