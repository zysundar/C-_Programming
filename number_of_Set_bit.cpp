#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	while(n)
	{
		n=n&(n-1);
		c++;
	}
	cout<<c;
	return 0;
}
