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
#define pi pair<int,int>
#define pii pair<pi,ll
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 10005
#define INF 100005
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<ll> 
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
int dp[maxn];
void go()
{
    dp[0]=0;
    rep1(i,maxn-1)
    {
        dp[i]=INF;
        rep1(j,105)
        {
            if((j*j)>i)break;
            dp[i]=min(dp[i],1+dp[i-j*j]);
        }
    }
}
int main()
{
    int t;si(t);
    go();
    rep1(ppp,t)
    {
        printf("Case #%d: ",ppp);
        int n;si(n);
        printf("%d\n",dp[n]);
    }
    return 0;
}
