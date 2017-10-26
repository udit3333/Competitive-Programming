#include <iostream>
#include <algorithm>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include <cmath>
#include <unordered_map>
#include <sstream>
#include <utility>
#include <iterator>
#include <vector>
#include <stack>
#include <cstdio>
#include <climits> 
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <string>
using namespace std;
#define ll long long  int
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep2(i,a,b,c) for(int i=a;i<=b;i+=c)
#define si(x) scanf("%d",&x)
#define sd(x) scanf("%lf",&x)
#define sf(x) scanf("%f",&x)
#define sll(x) scanf("%lld",&x)
#define pi pair<int,int>
#define pii pair<pi,ll>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxx 70000000
#define maxn 100005
#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
//maxx- nlogn
//maxn- max value of n 
int tree[maxx],L[maxx],R[maxx],root[maxn];
int arr[maxn],n,m,curr=1;
void build(int x=0,int l=1,int r=n)
{
    int mid=(l+r)/2;
    if(l==r)return;
    L[x]=curr++;R[x]=curr++;
    build(L[x],l,mid);
    build(R[x],mid+1,r);
}
int update(int x,int prev,int l=1,int r=n)
{
    int id=curr++;
    tree[id]=tree[prev]+1;
    if(l==r)
    {
        return id;
    }
    L[id]=L[prev];R[id]=R[prev];
    int mid=(l+r)/2;
    if(x<=mid)L[id]=update(x,L[prev],l,mid);
    else R[id]=update(x,R[prev],mid+1,r);
    return id;
}
int query(int x1,int x2,int k,int l=1,int r=n)
{
    if(l==r)return l;
    int diff=tree[L[x1]]-tree[L[x2]];
    int mid=(l+r)/2;
    if(k<=diff) return query(L[x1],L[x2],k,l,mid);
    else return query(R[x1],R[x2],k-diff,mid+1,r);
}
int main(){
    si(n);si(m);
    map<int,int> m1,m2;
    rep1(i,n){si(arr[i]);m1[arr[i]]=0;}
    int x=1;
    for(auto it=m1.begin();it!=m1.end();it++)
    {
        m1[it->f]=x;
        m2[x]=it->f;
        x++;
    }
    build();
    rep1(i,n)root[i]=update(m1[arr[i]],root[i-1]);
    while(m--)
    {
        int x,y,z;si(x);si(y);si(z);
        printf("%d\n",m2[query(root[y],root[x-1],z)]);
    }
    return 0;
}

