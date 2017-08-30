#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
string s;
cin>>s;
stack<char> temp;
for(int i=0;i<s.length();i++)
{
if(s[i]=='(')
temp.push('(');
if(s[i]=='*')
temp.push('*');
if(s[i]=='+')
temp.push('+');
if(s[i]=='-')
temp.push('-');
if(s[i]=='^')
temp.push('^');
if(s[i]=='/')
temp.push('/');
if(s[i]>='a'&&s[i]<='z')
{
	cout<<s[i];
}

if(s[i]==')')
{
char t=temp.top();
temp.pop();
while(t!='(')
{
cout<<t;
t=temp.top();
temp.pop();

}
}	
}
cout<<endl;
}
return 0;	
}
