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
ll dp[15][35],n,k,arr[35];
ll recur(ll x,ll y)
{
    if(x<=0||y==n)return 0;
    if(dp[x][y]!=-1)return dp[x][y];
    dp[x][y]=recur(x,y+1);
    for(ll i=y+1;i<n;i++)dp[x][y]=max(dp[x][y],(recur(x-1,i+1)+(arr[i]-arr[y])));
    return dp[x][y];
}
int main()
{
    int t;si(t);
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        sll(k);sll(n);
        rep(i,n)sll(arr[i]);
        printf("%lld\n",recur(k,0));
    }
    
    return 0;
}

