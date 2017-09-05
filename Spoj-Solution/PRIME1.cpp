//PRIME1 - Prime Generator
#include <iostream>
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
bool prime[32000];
bool temp[100005];
int main() {
memset(prime,1,sizeof(prime));
for(int i=2;i<32000;i++)
{
if(prime[i])
{
for(int j=2*i;j<32000;j=j+i)
prime[j]=0;
}
}
int t;
scanf("%d",&t);
while(t--)
{
ll m,n;
scanf("%lld",&m);
scanf("%lld",&n);
memset(temp,1,sizeof(temp));
ll cap=sqrt(n)+1;
for(ll i=2;i<cap;i++)
{
if(prime[i]){
ll start;
if(i>=m)
{
start=2*i;	
}
else
start=m+(i-(m%i))%i;
while(start<=n)
{
temp[start-m]=0;	
start+=i;
}
}
}
for(ll i=0;i<(n-m+1);i++)
{
if(temp[i])
{
	ll x=i+m; 
if(x!=1)
cout<<x<<endl;
}}
cout<<endl;	
}	
return 0;
}
