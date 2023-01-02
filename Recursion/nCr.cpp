#include<iostream>
using namespace std;
int fac(int x)
{
    if(x==0)
        return 1;
    else if(x==1)
        return 1;
    else
        return x*fac(x-1);
}
int C(int n, int r)
{
    int t1,t2,t3;
    t1=fac(n);
    t2=fac(r);
    t3=fac(n-r);
    return t1/(t2*t3);
}

int main()
{
    cout<<C(5,2);
    return 0;
}
