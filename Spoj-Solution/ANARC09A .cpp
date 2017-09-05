
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long  int
#define pi pair<int,int>
#define pii pair<pi,int>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back


int check(string x)
{
stack<char> s;
for(int i=0;i<x.length();i++)
{
if(x[i]=='}')
{
if(s.empty())
{s.push(x[i]);
continue;}
char c=s.top();
if(c=='{')s.pop();
else s.push(x[i]);
}
else
s.push(x[i]);
}
int num1=0,num2=0;
while(!s.empty())
{char c=s.top();
s.pop();
if(c=='{')num1++;
else num2++;
}
int res=0;
res+=num1/2;
res+=num2/2;
res+=(num1%2)*2;
return res;
}
int main()
{
int c=1;	
while(1)
{
string s;
cin>>s;
if(s[0]=='-')break;
cout<<c<<". "<<check(s)<<endl;
c++;
}	
return 0;
}


