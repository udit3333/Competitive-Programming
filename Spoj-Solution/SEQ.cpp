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
#define mod 1000000000
#define s second
#define pb push_back
#define maxn 505
#define INF 10000000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<vector<ll> >
vecc mul(vecc a,vecc b)
{
    int n1=a.size(),m1=a[0].size();
    int n2=b.size(),m2=b[0].size();
    vecc c(n1,vector<ll> (m2));
    rep(i,m2)
    {   
        rep(j,n1)
        {
            ll x=0;
            rep(k,m1)
            {
                x=(x+(a[j][k]*b[k][i])%mod)%mod;
            }
            c[j][i]=x;
        }
    }
    return c;
}
vecc mulmod(vecc a,ll x)
{
    int n=a.size(),m=a[0].size();
    if(x==0)
    {
        vecc b(n,vector<ll> (m));
        rep(i,n)
        {
            rep(j,n)
            {
                if(i==j)b[i][j]=1;
                else b[i][j]=0;
            }
        }
        return b;
    }
    vecc b=mulmod(a,x/2);
    b=mul(b,b);
    if(x%2==1)return mul(a,b);
    else return b;
}

int main(){
    int t;si(t);
    while(t--)
    {
        int k; si(k);
        vecc b(1, vector<ll> (k));
        rep(i,k)sll(b[0][i]); 
        vector<ll> c(k);
        rep(i,k)sll(c[i]);
        ll n;sll(n);
        if(n<=k)
        {
            printf("%lld\n",b[0][n-1]);
            continue;
        }
        vecc a(k,vector<ll> (k,0));
        rep(i,k-1)
        {
            a[i+1][i]=1;
        }
        for(int i=k-1;i>=0;i--)
        {
            a[i][k-1]=c[k-i-1];
        }
        vecc c1=mulmod(a,n-(ll)k);
        vecc res=mul(b,c1);
        printf("%lld\n",res[0][k-1]);
    }
    return 0;
}


