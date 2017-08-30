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
ll b1[100005],b2[100005];
ll n;
void update1(ll x, ll delta)
{
for(;x<=n;x+=x&-x)
b1[x]+=delta;
}
ll query1(ll x)
{
     ll sum = 0;
     for(; x > 0; x -= x&-x)
        sum += b1[x];
     return sum;
}
void update2(ll x, ll delta)
{
for(;x<=n;x+=x&-x)
b2[x]+=delta;
}
ll query2(ll x)
{
     ll sum = 0;
     for(; x > 0; x -= x&-x)
        sum += b2[x];
     return sum;
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
memset(b1,0,sizeof(b1));
memset(b2,0,sizeof(b2));
ll m;
scanf("%lld",&n);
scanf("%lld",&m);
while(m--)
{
ll c,p,q,v;
scanf("%lld",&c);
scanf("%lld",&p);
scanf("%lld",&q);
if(c==0)
{
scanf("%lld",&v);
update1(p,v);
update1(q+1,-v);
update2(p,v*(p-1));
update2(q+1,-(v*q));
}
else
{
ll res;
res=q*query1(q)-query2(q);
res-=(p-1)*query1(p-1)-query2(p-1);
cout<<res<<endl;
}
}
}
return 0;
}


