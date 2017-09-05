#include <vector>
#include <stack>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <string>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <unordered_map>
#include <sstream>
#include <utility>
#include <iterator>
using namespace std;
#define si(x) scanf("%d",&x)
#define sd(x) scanf("%lf",&x)
#define sf(x) scanf("%f",&x)
#define sll(x) scanf("%lld",&x)
#define pi pair<int,int>
#define pii pair<pi,ll>
#define sti stack<pi>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 2000005
#define INF 1000000005
#define NIL 0
#define source 100001
#define sink 100002 
#define one 1ll
#define block 100
#define ll long long  int
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep2(i,a,b,c) for(int i=a;i<=b;i+=c)
ll coun[maxn],sum[maxn],n,x,y,maxx;
ll go1(ll l,ll r)
{
    if(l>r)return 0;
    return (coun[r]-coun[l-1]);
}
ll go2(ll l,ll r)
{
    if(l>r)return 0;
    return (sum[r]-sum[l-1]);
}
ll go(ll g)
{
    ll k=g,res=0;
    while(k<=(1000000+g))
    {
        ll f=max(k-g+1,k-(x/y));
        res+=go1(k-g+1,f-1)*x;
        res+=(go1(f,k)*k-go2(f,k))*y;
        k+=g;
    }
    return res;
}
int main()
{
    sll(n);sll(x);sll(y);
    rep(i,n)
    {
        ll t;sll(t);
        coun[t]++;
        sum[t]+=t;
    }
    rep1(i,maxn-1)
    {
        coun[i]+=coun[i-1];
        sum[i]+=sum[i-1];
    }
    ll res=n*x;
    for(ll i=2;i<=1000000;i++)
    { 
        res=min(res,go(i));
    }
    printf("%lld\n",res);
    return 0;
}
