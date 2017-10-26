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
#define mod 5000000
#define s second
#define pb push_back
#define maxn 505
#define INF 10000000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
ll arr[maxn],dp[maxn][maxn],p[maxn],m,k;
ll recur(ll x,ll y)
{
    //if(x==k||y>=m)return 0;
    if(dp[x][y]!=-1)return dp[x][y];
    ll t=0;
    dp[x][y]=INF;
    if(x==k-1)
    {
        for(int i=y;i<m;i++)t+=arr[i];
        dp[x][y]=t;
        return dp[x][y];
    }
    for(ll i=y;i<m;i++)
    {
        if(m-i<k-x)break;
        t+=arr[i];
        ll x1=max(t,recur(x+1,i+1));
        if(x1<dp[x][y])
        {
            dp[x][y]=x1;
            p[x]=i-y+1;
        }
    }
    return dp[x][y];
}
int main(){
    int t;si(t);
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        sll(m);sll(k);
        rep(i,m)sll(arr[i]);
        recur(0,0);
        ll z1=0;
        rep(i,k-1)z1+=p[i];
        p[k-1]=m-z1;
        z1=0;
        rep(i,k)
        {
            rep(j,p[i])
            {
                printf("%lld ",arr[z1++]);
            }
            if(i==(k-1))printf("\n");
            else printf("/ ");
        }
    }
    return 0;
}


