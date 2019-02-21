#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool isoperand(char ch)
{
	if('0'<=ch && ch<='9')
	{
		return true;
	}
	else
	return false;
}
bool isoperator(char ch)
{
	if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
	{
		return true;
	}
	else
	return false;
}/*
int apply(char ch,int op1,int op2)
{
	int r1;
	if(ch=='+')
	{
	 r1=op1 + op2;
    }
    else if( ch=='-')
    {
    	r1=op1-op2;
    }
    else if(ch=='/')
    {
    	r1=op1/op2;
    }
    else
    {
    	r1=op1*op2;
    }
    return r1;
}*/
int eval(string post)
{
	char ch;
	string op1,op2;
	string r;
	stack<string>s;
	for(int i=0;i<post.length();i++)
	{
		ch=post[i];
		if(isoperand(ch))
		{
			string s1=" ";
			s1=s1+ch;
			s.push(s1);
		}
		else if(isoperator(ch))
		{
			op2=s.top();
			s.pop();
			op1=s.top();
			s.pop();
			r="("+op1+ch+op2+")";
			s.push(r);
		}
	}
	//cout<<s.top();
	
}
int main()
{
	string str;
	cin>>str;
	eval(str);
}
