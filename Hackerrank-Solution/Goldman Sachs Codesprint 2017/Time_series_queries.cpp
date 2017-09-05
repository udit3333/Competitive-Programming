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
#define pi pair<ll,ll>
#define pii pair<pi,ll>
#define sti stack<pi>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 100005
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
ll pri[maxn],tim[maxn],maxx[maxn],fin[maxn],n;
ll bs(ll x)
{
    ll start=0,end=n-1;
    while(start<=end)
    {
        ll mid=(start+end)/2;
        if(fin[mid]<x)start=mid+1;
        else end=mid-1;
    }
    return end+1;
}
ll bs1(ll x)
{
    ll start=0,end=n-1;
    while(start<=end)
    {
        ll mid=(start+end)/2;
        if(tim[mid]<x)start=mid+1;
        else end=mid-1;
    }
    return end+1;
}
int main()
{
    ll q;sll(n);sll(q);
    rep(i,n)sll(tim[i]);
    rep(i,n)sll(pri[i]);
    for(int i=n-1;i>=0;i--)
    {
        if(i==n-1)maxx[i]=pri[i];
        else maxx[i]=max(maxx[i+1],pri[i]);
    }
    rep(i,n)
    {
        if(i==0)fin[i]=pri[i];
        else fin[i]=max(fin[i-1],pri[i]);
    }
    while(q--)
    {
        ll x,y,res=-1;
        sll(x);sll(y);
        if(x==1)
        {
            ll z=bs(y);
            if(z!=n)res=tim[z];
        }
        else
        {
            ll z=bs1(y);
            if(z<n)res=maxx[z];
        }
        printf("%lld\n",res);
    }
    return 0;
}

