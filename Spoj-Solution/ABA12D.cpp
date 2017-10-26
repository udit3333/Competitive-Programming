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
#define maxn 1000005
#define INF 10000000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<vector<double> >
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
bool prime[maxn];
int arr[maxn];
int main()
{
    for(int i=2;i<=sqrt(maxn);i++)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<maxn;j+=i)prime[j]=1;
        }
    }
    for(ll i=2;i<maxn;i++)
    {
        if(!prime[i])
        {
            ll j=i;
            while(j<maxn)
            {
                ll x=(j*i-1)/(i-1);
                if(x>=maxn)break;
                if((!prime[x])&&x>=2){arr[j]=1;}
                j*=i;
            }
        }
    }
    rep1(i,maxn-1)arr[i]+=arr[i-1];
    int t;si(t);
    while(t--)
    {
        int x,y;si(x);si(y);
        printf("%d\n",arr[y]-arr[x-1]);
    }
    return 0;
}