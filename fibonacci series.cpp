#include<iostream>
#include<conio.h>
using namespace std;
main()
{int n,first=0,second=1,next,i;
cout<<"enter the value of n";
cin>>n;
cout<<n;
for(i=0;i<n;i++)
{if(i<=1)
next=i;
else
next=first+second;
first=second;
second=next;
}
cout<<next;
getch();
}