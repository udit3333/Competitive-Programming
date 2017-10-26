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
#define pii pair<pi,int>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 30005
#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
struct node
{
	int l,r,k,ind;
};
pi arr[maxn];
node que[200005];
int bit[maxn+5],res[200005];
void update(int index,int val)
{
	while(index<maxn)
	{
		bit[index]+=val;
		index+=index&(-index);
	}
}
int query(int index)
{
	int res=0;
	while(index>0)
	{
		res+=bit[index];
		index-=index&(-index);
	}
	return res;
}
bool comp(node a,node b)
{
	return a.k>b.k;
}
int main(){
	int n;si(n);
    rep(i,n){si(arr[i].f);arr[i].s=i+1;}
    sort(arr,arr+n);
    int q;si(q);
    rep(i,q)
    {
    	int x,y,z;si(x);si(y);si(z);
    	que[i].l=x;que[i].r=y;que[i].k=z;que[i].ind=i;
    }
    sort(que,que+q,comp);
    int last=n-1;
    rep(i,q)
    {
    	int x=que[i].l,y=que[i].r,z=que[i].k;
    	while(last>=0&&(arr[last].f>z))
    	{
    		update(arr[last].s,1);
    		last--;
    	}
    	res[que[i].ind]=query(y)-query(x-1);
    }
    rep(i,q)printf("%d\n",res[i]);
    return 0;
}

