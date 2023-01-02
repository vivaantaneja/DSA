#include<iostream>
using namespace std;
int power(int m,int n)
{
    if(n>0)
        return m*power(m,n-1);
    else
        return 1;
}

int main()
{
    cout<<power(3,3);
    return 0;
}
