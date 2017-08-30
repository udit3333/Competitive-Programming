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
double arr[277];
int main()
{
while(1)
{
string s;
cin>>s;
int flag=1;
if(s[0]=='0')break;
ll curr=1,prev=1;
for(int i=1;i<s.length();i++)
{
int a=s[i-1]-'0';
int b=s[i]-'0';
int c=a*10+b;
if(a==0&&b==0)
{
cout<<"0"<<endl;
flag=0;
break;
}
if(b==0)
{
if(a==1||a==2)	
{curr=prev;
continue;}
else
{
cout<<"0"<<endl;
flag=0;
break;	
}
}
if(a==0)
{
prev=curr;
continue;
}
if(c<=26)
{
ll temp;
temp=curr+prev;	
prev=curr;
curr=temp;
continue;
}
prev=curr;

	
}
if(flag)
cout<<curr<<endl;
}
return 0;
}

