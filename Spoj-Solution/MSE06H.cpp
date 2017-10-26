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
#define maxn 1005
#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
pi arr[1000005];
ll bit[maxn];
void update(int index,ll val)
{
    while(index<maxn)
    {
        bit[index]+=val;
        index+=(index&(-index));
    }
}
ll query(int index)
{
    ll res=0;
    while(index>0)
    {
        res+=bit[index];
        index-=(index&(-index));
    }
    return res;
}
int main(){
    int t;si(t);
    rep1(ii,t)    
    {
        memset(bit,0,sizeof(bit));
        ll res=0;
        int n,m,k;si(n);si(m);si(k);
        rep(i,k)
        {
            si(arr[i].f);si(arr[i].s);
        }
        sort(arr,arr+k);
        rep(i,k)
        {
            res+=(query(1001)-query(arr[i].s));
            update(arr[i].s,1);
        }
        printf("Test case %d: %lld\n",ii,res);
    }
    return 0;
}


