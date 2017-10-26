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
#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
int arr[maxn];
ll bit[maxn],res[maxn];
void update(int index,ll val)
{
    while(index<maxn)
    {
        bit[index]=(bit[index]+val)%mod;
        index+=index&(-index);
    }
}
ll query(int index)
{
    ll res=0;
    while(index>0)
    {
        res=(res+bit[index])%mod;
        index-=index&(-index);
    }
    return res;
}

int main(){
    int n,k;si(n);si(k);
    map<int,int> m;
    rep1(i,n)
    {
        res[i]=1;
        si(arr[i]);
        m[arr[i]]=1;
    }
    int z=1;
    for(auto it=m.begin();it!=m.end();it++)
    {
        it->s=z;
        z++;
    }
    ll ans=0;
    for(int i=2;i<=k;i++)
    {
         memset(bit,0,sizeof(bit));
         ll sum=0;
        for(int j=n;j>0;j--)
        {
            ll x=query(m[arr[j]]);
            update(m[arr[j]],res[j]);
            ll x1=(sum-x+mod)%mod;
            sum=(sum+res[j])%mod;
            res[j]=x1;
        }
    }
    rep1(i,n)ans=(ans+res[i])%mod;
    printf("%lld\n",ans);
    return 0;
}


