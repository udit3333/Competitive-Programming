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
#define maxn 20005
#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
int arr[maxn],tree[4*maxn],bit[maxn];
int n;

void build(int x=1,int l=1,int r=n)
{
    if(l>r)return;
    if(l==r){tree[x]=1;return;}
    int mid=(l+r)>>1;
    build(2*x,l,mid);
    build(2*x+1,mid+1,r);
    tree[x]=tree[2*x]+tree[2*x+1];
}
int query(int val,int x=1,int l=1,int r=n)
{
    if(l>r)return 0;
    if(l==r)return l;
    int mid=(l+r)>>1;
    if(tree[2*x]>=val)return query(val,2*x,l,mid);
    else return query(val-tree[2*x],2*x+1,mid+1,r);
}
void update(int ind,int x=1,int l=1,int r=n)
{
    if(l>r)return;
    if(l==r){tree[x]=0;return;}
    int mid=(l+r)>>1;
    if(ind<=mid)update(ind,2*x,l,mid);
    else update(ind,2*x+1,mid+1,r);
    tree[x]=tree[2*x]+tree[2*x+1];
}
void update1(int ind,int val)
{
    while(ind<maxn)
    {
        bit[ind]+=val;
        ind+=(ind&(-ind));
    }
}
int query1(int ind)
{
    int res=0;
    while(ind>0)
    {
        res+=bit[ind];
        ind-=(ind&(-ind));
    }
    return res;
}
void build1()
{
    memset(bit,0,sizeof(bit));
    rep1(i,n)update1(i,1);
}


int main(){
    int t;si(t);
    while(t--)
    {
        si(n);
        build();
        build1();
        int last=0,cur=n;
        rep1(i,n)
        {
            int y=i+1;
            if(last)
            {
                int x=query1(last);
                y+=x;
            }
            y=y%cur;
            if(y==0)y=cur;
            y=query(y);
            arr[y]=i;
            update(y);
            update1(y,-1);
            cur--;
            last=y;
        }
        rep1(i,n)printf("%d ",arr[i]);
        printf("\n");
    }
    return 0;
}


