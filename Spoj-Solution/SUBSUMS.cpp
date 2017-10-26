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
#define maxn 36
#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
ll dp1[1<<17],dp2[1<<17],a,b,n,arr[maxn];
void go1(int x,ll y,int z)
{
    if(x==(n/2+1))
    {
        dp1[z]=y;return;
    }
    go1(x+1,y,z);
    go1(x+1,y+arr[x],z+(1<<(x-1)));
}
void go2(int x,ll y,int z)
{
    if(x==(n+1))
    {
        dp2[z]=y;return;
    }
    go2(x+1,y,z);
    go2(x+1,y+arr[x],z+(1<<(x-(n/2+1))));
}
int main(){
    ll ans=0;
    sll(n);sll(a);sll(b);
    rep1(i,n)sll(arr[i]);
    go1(1,0,0);go2(n/2+1,0,0);
    int a1=n/2,a2=n-a1;
    a1=1<<a1;a2=1<<a2;
    sort(dp1,dp1+a1);
    sort(dp2,dp2+a2);
    rep(i,a1)
    {
        int start=0,end=a2-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if((dp1[i]+dp2[mid])<a)start=mid+1;
            else end=mid-1;
        }
        int x1=end+1;
        start=0;end=a2-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if((dp1[i]+dp2[mid])>b)end=mid-1;
            else start=mid+1;
        }
        int x2=start-1;
        if(x1<=x2)ans+=(x2-x1+1);
    }
    printf("%lld\n",ans);
    return 0;
}


