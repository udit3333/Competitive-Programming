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
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
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
#define INF 10000008
#define NIL 0
#define source 100001
#define sink 100002 
#define one 1ll
#define block 317
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
#define maxn 800005
class node{
	// node of the segment tree.
	// use 8 time size 
public:
	int x,y,z;
	node()
	{
		x=0;y=0;z=0;
	}
};
class Segment_tree{
node tree[maxn];
int lazy[maxn];
public:
	Segment_tree()
	{
		memset(lazy,0,sizeof(lazy));
	}
	void build(int l,int r,int curr)
	{
		if(l>r)return;
		if(l==r)
		{
			tree[curr].x=1;
			return;
		}
		int mid=(l+r)/2;
		build(l,mid,2*curr);
		build(mid+1,r,2*curr+1);
		tree[curr].x=tree[2*curr].x+tree[2*curr+1].x;
	}
	void update(int x,int y,int l,int r,int curr)
	{
		if(l>r)return;
		if(lazy[curr])
		{
			if(lazy[curr]%3==1)
			{
				int x1=tree[curr].x;
				tree[curr].x=tree[curr].z;
				tree[curr].z=tree[curr].y;
				tree[curr].y=x1;
			}
			else if(lazy[curr]%3==2)
			{
				int x1=tree[curr].x;
				tree[curr].x=tree[curr].y;
				tree[curr].y=tree[curr].z;
				tree[curr].z=x1;
			}
			lazy[2*curr]+=lazy[curr];
			lazy[2*curr+1]+=lazy[curr];
			lazy[curr]=0;
		}
		if(x>r||y<l)return;
		if(x<=l&&y>=r)
		{
			int x1=tree[curr].x;
			tree[curr].x=tree[curr].z;
			tree[curr].z=tree[curr].y;
			tree[curr].y=x1;
			lazy[2*curr]++;
			lazy[2*curr+1]++;
			return;
		}
		int mid=(l+r)/2;
		update(x,y,l,mid,2*curr);
		update(x,y,mid+1,r,2*curr+1);
		tree[curr].x=tree[2*curr].x+tree[2*curr+1].x;
		tree[curr].y=tree[2*curr].y+tree[2*curr+1].y;
		tree[curr].z=tree[2*curr].z+tree[2*curr+1].z;
	}
	int query(int x,int y,int l,int r,int curr)
	{
		if(l>r)return 0;
		if(lazy[curr])
		{
			if(lazy[curr]%3==1)
			{
				int x1=tree[curr].x;
				tree[curr].x=tree[curr].z;
				tree[curr].z=tree[curr].y;
				tree[curr].y=x1;
			}
			else if(lazy[curr]%3==2)
			{
				int x1=tree[curr].x;
				tree[curr].x=tree[curr].y;
				tree[curr].y=tree[curr].z;
				tree[curr].z=x1;
			}
			lazy[2*curr]+=lazy[curr];
			lazy[2*curr+1]+=lazy[curr];
			lazy[curr]=0;
		}
		if(x>r||y<l)return 0;
		if(x<=l&&y>=r)
		{
			return tree[curr].x;
		}
		int mid=(l+r)/2;
		return (query(x,y,l,mid,2*curr)+query(x,y,mid+1,r,2*curr+1));
	}
};

int main()
{
	int n,q;si(n);si(q);
	Segment_tree d;
	d.build(1,n,1);
	while(q--)
	{
		int x,y,z;si(x);si(y);si(z);
		if(x==0)
		{
			d.update(y+1,z+1,1,n,1);
		}
		else
		{
			printf("%d\n",d.query(y+1,z+1,1,n,1));
		}
	}	
    return 0;
}
    