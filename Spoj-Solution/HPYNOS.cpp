#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll n;
scanf("%lld",&n);
unordered_map<ll,bool> m;
ll count=1;
while(1)
{
ll temp=n,res=0;
while(n)
{
ll d=n%10;
res+=d*d;
n=n/10;
}
if(res==1)
{
cout<<count<<endl;
break;
}
if(m.find(res)!=m.end())
{
cout<<"-1"<<endl;
break;
}
else
m[res]=1;
n=res;
count++;	
}
return 0;	
}


