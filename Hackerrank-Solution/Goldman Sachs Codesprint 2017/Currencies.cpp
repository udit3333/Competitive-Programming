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
#define pi pair<ll,double>
#define pii pair<pi,ll>
#define sti stack<pi>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 10000
#define INF -1000000005
#define NIL 0
#define source 100001
#define sink 100002 
#define one 1ll
#define block 100
#define ll long long  int
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep2(i,a,b,c) for(int i=a;i<=b;i+=c)
pi dp1[25][25][maxn+10],dp2[25][100005];
ll n,arr[25][25];
int main()
{
    sll(n);
    ll x,s,f,m;sll(x);sll(s);sll(f);sll(m);
    rep(i,n)rep(j,n)sll(arr[i][j]);
    rep1(i,maxn)
    {
        rep(j,n)
        {
            rep(k,n)
            {
                if(i==1)
                {if(j!=k)dp1[j][k][i]={arr[j][k]%mod,log(arr[j][k])};
                 else dp1[j][k][i]={0,INF};
                continue;}
                double maxx2=0;
                ll maxx1=0;
                rep(l,n)
                {
                    double t1=dp1[j][l][1].s+dp1[l][k][i-1].s;
                    ll t2=(dp1[j][l][1].f*dp1[l][k][i-1].f)%mod;
                    if(t1>maxx2)
                    {
                        maxx2=t1;
                        maxx1=t2;
                    }
                }
                dp1[j][k][i]={maxx1,maxx2};
            }
        }
    }
 //  cout<<dp1[0][2][1005].f;
    rep1(i,100004)
    {
        rep(j,n)
        {
            if(i==1){dp2[j][i]=dp1[s][j][maxn];continue;}
            double maxx2=0;
            ll maxx1=0;
            rep(k,n)
            {
                 double t1=dp2[k][i-1].s+dp1[k][j][maxn].s;
                 ll t2=(dp2[k][i-1].f*dp1[k][j][maxn].f)%mod;
                 if(t1>maxx2)
                 {
                    maxx2=t1;
                    maxx1=t2;
                 }
            }
            dp2[j][i]={maxx1,maxx2};
        }
    }
    ll x1=m/maxn,y1=m%maxn,res;
    if(y1==0)
    {
        res=dp2[f][x1].f;
    }
    else
    {
        if(x1>0){
        ll maxx1=0;
        double maxx2=0;
        rep(i,n)
        {
            double t1=dp2[i][x1].s+dp1[i][f][y1].s;
            ll t2=(dp2[i][x1].f*dp1[i][f][y1].f)%mod;
            if(t1>maxx2)
            {
                maxx2=t1;
                maxx1=t2;
            }
        }
        res=maxx1;
    }
    else res=dp1[s][f][y1].f;
    }
    //cout<<res;
    printf("%lld\n",(x*res)%mod);
    return 0;
}

