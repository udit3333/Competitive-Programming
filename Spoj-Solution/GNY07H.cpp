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
#include <climits> 
#include <cmath>
#include <unordered_map>
#include <sstream>
#include <utility>
#include <iterator>
using namespace std;
#define ll long long  int
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep2(i,a,b,c) for(int i=a;i<=b;i+=c)
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
#define maxn 1005
#define INF 10000008
#define NIL 0
#define one 1ll
#define block 317
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
int dp[maxn];
int main()
{
    int t;si(t);
    dp[0]=1;dp[1]=1;dp[2]=5;dp[3]=11;
    for(int i=4;i<maxn;i++)
    {
        dp[i]=dp[i-1]+5*dp[i-2]+dp[i-3]-dp[i-4];
    }
    rep1(ppp,t)
    {
        int n;si(n);
        printf("%d %d\n",ppp,dp[n]);
    }
    return 0;
}
