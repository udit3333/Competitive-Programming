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
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 105
#define INF 1000000000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
ll r[maxn],b[maxn];
ll n,res;
void go(vector<bool> temp,ll sum,ll x1)
{
    if(x1==n-1)
    {
        res=min(res,sum);
        
        return;
    }
    rep(i,n)
    {
        if(!temp[i])
        {
            for(int j=i+1;j<n;j++)
            {
                if(!temp[j])
                {
                    temp[i]=1;
                    go(temp,sum+(r[i]^b[j]),x1+1);
                    go(temp,sum+(r[j]^b[i]),x1+1);
                    temp[i]=0;temp[j]=1;
                    go(temp,sum+(r[i]^b[j]),x1+1);
                    go(temp,sum+(r[j]^b[i]),x1+1);
                    temp[j]=0;
                }
            }
        }
    }

}
int main(){
    int t;si(t);
    rep1(ii,t)
    {
        res=INF;
        sll(n);
        rep(i,n)sll(r[i]);
        rep(i,n)sll(b[i]);
        vector<bool> temp(n,0);
        go(temp,0,0);
        printf("Case #%d: %lld\n",ii,res);
    }
    return 0;
}

