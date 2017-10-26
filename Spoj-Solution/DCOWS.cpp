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
#define maxn 10005
#define INF 100000000000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
ll dp[5005][5005],arr1[5005],arr2[5005];

int main(){

    int n,m;si(n);si(m);
    rep(i,n)sll(arr1[i]);
    rep(i,m)sll(arr2[i]);
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=i;j--)
        {
            if(i==n-1&&j==m-1){dp[i][j]=abs(arr2[m-1]-arr1[n-1]);continue;}
            if(n-i>m-j){dp[i][j]=INF;continue;}
            dp[i][j]=min(dp[i][j+1],dp[i+1][j+1]+abs(arr1[i]-arr2[j]));
        }
    }
    printf("%lld\n",dp[0][0]);
    return 0;
}


