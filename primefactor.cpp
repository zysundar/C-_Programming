#include <bits/stdc++.h>

using namespace std;
int prime(int n)
{
    while(n%2==0)
    {
        cout<<2;
        n=n/2;
    }
    for(int i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            cout<<i;
            n=n/i;
        }
    }
    if(n>2)
    {
        cout<<n;
    }
    return 0;
}
int main()
{
   int n;
   cin>>n;
   prime(n);
   return 0;
}
