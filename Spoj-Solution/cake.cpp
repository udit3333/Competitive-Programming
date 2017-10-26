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
ll power(ll a,ll b,ll c){
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
int main(){
    ll n,m,k;sll(n);sll(m);sll(k);
    ll res=power(m,n,mod);
    while(k--)
    {
        ll temp=1;
        ll a,b,c,d;sll(a);sll(b);sll(c);sll(d);
        if(a)temp=power(m,a-1,mod);
        if(c<=n)temp=(temp*power(m,n-c,mod))%mod;
        res=(res+temp)%mod;
    }
    printf("%lld\n",res);
    return 0;
}

