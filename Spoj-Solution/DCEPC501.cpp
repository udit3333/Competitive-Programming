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
#define pii pair<pi,ll>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 100020
#define INF 10000000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<vector<double> >
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
ll dp[maxn],arr[maxn];
int main()
{
    int t;si(t);
    while(t--)
    {
        int n;si(n);
        rep(i,n+9)dp[i]=0;
        rep(i,n)sll(arr[i]);
        for(int i=n-1;i>=0;i--)
        {
            ll x=0;
            rep(j,3)
            {
                if(i+j==n)break;
                x+=arr[i+j];
                dp[i]=max(dp[i],x+dp[i+2*(j+1)]);
            }
        }
        printf("%lld\n",dp[0]);
    }
    return 0;
}