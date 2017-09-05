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
#include <bits/stdc++.h>
using namespace std;
#define si(x) scanf("%d",&x)
#define sd(x) scanf("%lf",&x)
#define sf(x) scanf("%f",&x)
#define sll(x) scanf("%lld",&x)
#define pi pair<int,int>
#define pii pair<pi,int>
#define sti stack<pi>
#define f first
#define mp make_pair
#define ll long long
#define mod 1000000007
#define vecc vector<vector<ll> >
#define s second
#define pb push_back
#define maxn 100000
#define INF 1000000008
#define NIL 0
#define source 100001
#define sink 100002 
#define one 1ll
#define block 100#define ll long long  int
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep2(i,a,b,c) for(int i=a;i<=b;i+=c)
#define pri(a) printf("Case #%d: ",a); 
#define bitcount(x) __builtin_popcount(i)
int a[100005],b[100005];
void go()
{
    rep(i,512)a[i]=(bitcount(i)%2+1);
    for(int i=512;i<1024;i++)b[i-512]=(bitcount(i)%2+1);
}
int main()
{
    ll n,k,p,m;sll(n);sll(k);sll(p);sll(m);
    go();
    ll x=(512/n)+1;
    for(int i=512;i<n*x;i++){a[i]=1;b[i]=1;}
    rep(i,n*x)printf("%d ",a[i]);
    printf("\n");
    rep(i,n*x)printf("%d ",b[i]);
}
