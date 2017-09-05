#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
unordered_map <ll,ll> m;
ll count(ll t)
{
if(t==0||t==1||t==2||t==3||t==4)return t;	
ll t1,t2,t3,n;
if(m.find(t/2)!=m.end())
t1=m[t/2];
else
{
t1=count(t/2);
m[t/2]=t1;
}
if(m.find(t/3)!=m.end())
t2=m[t/3];
else
{
t2=count(t/3);
m[t/3]=t2;
}
if(m.find(t/4)!=m.end())
t3=m[t/4];
else
{
t3=count(t/4);
m[t/4]=t3;
}
n=t1+t2+t3;
//	return ((t1+t2)+t3);
if(n>t)return n;
else return t;
}
	

int main()
{
ll n;
int coun=0;
while(cin>>n)
{
//ll n;
//scanf("%lld",&n);

ll res=count(n);
cout<<res<<endl;

coun++;
if(coun>=10)break;
}

return 0;	
}















