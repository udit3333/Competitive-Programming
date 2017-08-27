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
#define pi pair<ll,ll>
#define pii pair<pi,ll>
#define sti stack<pi>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 100005
#define INF 1000000005
#define NIL 0
#define source 100001
#define sink 100002 
#define one 1ll
#define block 100
#define ll long long  int
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep2(i,a,b,c) for(int i=a;i<=b;i+=c)
int main()
{
    int t;si(t);
    while(t--)
    {
        int n;
        si(n);
        double k,x,d,res=0;
        sd(k);sd(x);sd(d);x/=100;
        rep(i,n){double y;sd(y);res+=max(k,x*y);}
        if(res<=d)printf("fee\n");
        else printf("upfront\n");
    }    
    return 0;
}
