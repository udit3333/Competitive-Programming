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
#define pii pair<pi,ll
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 400005
#define INF 10008
#define NIL 0
#define source 100001
#define sink 100002 
#define one 1ll
#define block 317
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
int dp[55][1005],wei[55],pri[55],m,k;
int recur(int x,int y)
{
	if(x==m)return 0;
	if(dp[x][y]!=-1)return dp[x][y];
	if((y-wei[x])>=0)dp[x][y]=pri[x]+recur(x+1,y-wei[x]);
	dp[x][y]=max(dp[x][y],recur(x+1,y));
	return dp[x][y];
}
int main()
{
	int t;si(t);
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		si(k);si(m);
	    rep(i,m){si(wei[i]);si(pri[i]);}
	    printf("Hey stupid robber, you can get %d.\n",recur(0,k));
	}
	return 0;
}