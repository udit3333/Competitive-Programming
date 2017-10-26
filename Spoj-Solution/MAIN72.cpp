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
#define maxn 100005
#define INF 10000000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
int arr[102],n;
bool temp[maxn],t2[maxn];
void go(int x)
{
    if(x==n)return;
    memset(t2,0,sizeof(t2));
    rep(i,maxn)
    {
        int x1=i+arr[x];
        if(x1>=maxn)break;
        if(temp[i])t2[x1]=1;
    }
    rep(i,maxn)if(t2[i])temp[i]=1;
    go(x+1);
}

int main(){
    int t;si(t);
    while(t--)
    {
        memset(temp,0,sizeof(temp));
        temp[0]=1;
        si(n);
        rep(i,n)si(arr[i]);
        go(0);
        ll res=0;
        for(ll i=0;i<maxn;i++)if(temp[i])res+=i;
        printf("%lld\n",res);
    }
    return 0;
}


