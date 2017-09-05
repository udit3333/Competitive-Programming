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
#define ll long long  int
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<=n;i++)
#define rep2(i,a,b,c) for(ll i=a;i<=b;i+=c)
#define si(x) scanf("%d",&x)
#define sd(x) scanf("%lf",&x)
#define sf(x) scanf("%f",&x)
#define sll(x) scanf("%lld",&x)
#define pi pair<ll,ll>
#define pii pair<pi,ll>
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
#define block 317
//std::ios::sync_with_stdio(false);
ll arr[maxn],has[block][maxn],value[block][3*block],siz[block],n,cur;
void build()
{
    for(ll i=1;i<=n;i+=block)
    {
        ll x=min(n,i+block-1);
        siz[cur]=x-i+1;
        ll z=1;
        for(ll j=i;j<=x;j++)
        {
            has[cur][arr[j]]++;
            value[cur][z]=arr[j];z++;
        }
        cur++;
    }
}
void rebuild()
{
    ll x=1;
    rep(i,block)
    {
        rep1(j,siz[i]){arr[x]=value[i][j];has[i][value[i][j]]--;x++;}
    }
    memset(siz,0,sizeof(siz));
    cur=0;
    build();
}
ll remove(ll x)
{
    ll curr=0,res=0;
    rep(i,block)
    {
        curr+=siz[i];
        if(curr>=x)
        {
            ll index=siz[i]-(curr-x);
            has[i][value[i][index]]--;
            res=value[i][index];
            for(ll j=index;j<siz[i];j++)value[i][j]=value[i][j+1];
            siz[i]--;
            break;
        }
    }
    return res;
}
void insert(ll x,ll val)
{
    ll curr=0;
    rep(i,block)
    {
        curr+=siz[i];
        if(curr>=x)
        {
            ll index=siz[i]-(curr-x);
            has[i][val]++;
            siz[i]++;
            for(ll j=siz[i];j>index+1;j--)value[i][j]=value[i][j-1];
            value[i][index+1]=val;
            break;
        }
    }
}
void update(ll l,ll r)
{
    if(l==r)return;
    ll val=remove(r);
    insert(l-1,val);
}
ll query(ll l,ll r,ll k)
{
    ll curr=0,res=0;
    rep(i,block)
    {
        curr+=siz[i];
        if(curr>=l&&curr>=r)
        {
            ll index1=siz[i]-(curr-l);
            ll index2=siz[i]-(curr-r);
            for(ll j=index1;j<=index2;j++)
            {
                if(value[i][j]==k)res++;
            }
            return res;
        }
        if(curr>=l)
        {
            ll index1=siz[i]-(curr-l);
            for(ll j=index1;j<=siz[i];j++)
            {
                if(value[i][j]==k)res++;
            }
            for(ll j=i+1;j<block;j++)
            {
                curr+=siz[j];
                if(curr>=r)
                {
                    ll index2=siz[j]-(curr-r);
                    for(ll t=1;t<=index2;t++)
                    {
                        if(value[j][t]==k)res++;
                    }
                    return res;
                }
                else res+=has[j][k];
            }

        } 
    }
    return res;
}
int main()
{
    sll(n);
    rep1(i,n)sll(arr[i]);
    build();
    ll q;sll(q);
    ll last=0,z=1;
    rep(i,q)
    {
        ll a,l,r,k;sll(a);
        if(a==1)
        {
            sll(l);sll(r);
            l=(l+last-1)%n+1;r=(r+last-1)%n+1;
            if(l>r)swap(l,r);
            update(l,r);
            z++;
        }
        else
        {
            sll(l);sll(r);sll(k);
            l=(l+last-1)%n+1;r=(r+last-1)%n+1;k=(k+last-1)%n+1;
            if(l>r)swap(l,r);
            last=query(l,r,k);
            printf("%lld\n",last);
        }
        if(z%block==0){rebuild();z++;}
    }
    return 0;
}
