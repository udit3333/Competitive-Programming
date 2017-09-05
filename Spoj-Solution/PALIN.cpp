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
int main()
{
ll t;

scanf("%lld",&t);
while(t--)
{
string s;
cin>>s;
ll start=0;
ll end=s.length()-1;
int flag=1;
while(start<=end)
{
if((end-start)>1)	
{
if((s[start]==s[end]))
{
start++;
end--;
}
else if(s[start]>s[end])
{
flag=0;
s[end]=s[start];
start++;
end--;
}
else 
{
flag=1;
s[end]=s[start];
start++;
end--;
}
}
else if(start==end)
{
if(flag)
{
if(s[start]!='9')
{
s[start]++;	
start++;
end--;
}
else
{
while(1)
{
if(s[start]=='9')
{

s[start]='0';
s[end]='0';
end--;
start++;
}
else
{
s[start]++;
s[end]++;
break;
}
}
}
}
else
{
start++;
end--;
}
}
else
{
if(s[start]!=s[end])
{
if(s[start]>s[end])
{
s[end]=s[start];
start++;
end--;
}
else
{
s[start]++;
s[end]=s[start];
start++;
end--;
}
}
else
{
if(flag)
{
if(s[start]!='9')
{
s[start]++;
s[end]++;
start++;
end--;
}
else
{
s[start]='0';
s[end]='0';
start=start+2;
end=end-2;
while(1)
{
if(s[start]=='9')
{

s[start]='0';
s[end]='0';
end--;
start++;
}
else
{
s[start]++;
s[end]++;
break;
}
}	
	
}	
}	
else
{
start++;
end--;
}
}
}
	
}
flag=1;
for(int i=0;i<s.length();i++)
{
if(s[i]!='0')
{
	flag=0;	
	break;
}
}
if(flag)
{
s[0]='1';
s=s+'1';
}
cout<<s<<endl;

}
  
return 0;
}

