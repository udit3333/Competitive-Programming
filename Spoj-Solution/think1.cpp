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
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<=n;i++)
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
#define maxn 1005
#define INF 10000000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<vector<double> >
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
ll fact[maxn],prod[maxn][maxn],prod1[maxn][maxn];
ll modulo(ll a,ll b,ll c){
    ll x=1,y=a; 
    while(b > 0){
        if(b%2 == 1){
            x=(x*y)%c;
        }
        y = (y*y)%c; 
        b /= 2;
    }
    return x%c;
}
int main()
{
    fact[0]=1;
    rep1(i,maxn-1){fact[i]=(i*fact[i-1])%mod;}
    rep(i,maxn)
    {
        rep(j,maxn)
        {
            if(j==i){prod[i][j]=fact[i];prod1[i][j]=i;continue;}
            prod[i][j]=(prod[i][j-1]*fact[j])%mod;
            prod1[i][j]=(prod1[i][j-1]*j)%mod;
        }
    }
    int q;si(q);
    while(q--)
    {
        ll a,b,c,d;sll(a);sll(b);sll(c);sll(d);
        ll res=0;
        for(ll i=a;i<=b;i++)
        {
            ll temp;
            if(i>=c&&i<=d)
            {
                temp=modulo(fact[i],i-c+1,mod);
                ll temp1=(prod[c][i])%mod;
                temp1=(temp1*prod[0][i-c])%mod;
                temp=(temp*modulo(temp1,mod-2,mod))%mod;
                temp=(temp*modulo(i,d-i,mod))%mod;
                if(i+1<=d)temp=(temp*prod1[i+1][d])%mod;
            }
            else if(i<c)
            {
                temp=modulo(i,d-c+1,mod);
                temp=(temp*(prod1[c][d]))%mod;
            }
            else
            {
                temp=modulo(fact[i],d-c+1,mod);
                ll temp1=(prod[c][d])%mod;
                temp1=(temp1*prod[i-d][i-c])%mod;
                temp=(temp*modulo(temp1,mod-2,mod))%mod;
            }
            res=(res+temp)%mod;
        }
        printf("%lld\n",res%mod);
    }
    return 0;
}