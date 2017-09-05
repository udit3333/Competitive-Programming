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
#define pi pair<int,int>
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
ll a1,a2,b1,b2,c1,c2;
bool go()
{
    ll x1=b1-a1,y1=b2-a2,x2=c1-b1,y2=c2-b2;
    if(x1==0&&x2==0)return 1;
    if(x1==0||x2==0)return 0;
    double t1=y1/(double)x1;
    double t2=y2/(double)x2;
    if(t1==t2)return 1;
    else return 0;
}
int main()
{
    sll(a1);sll(a2);sll(b1);sll(b2);sll(c1);sll(c2);
    ll x,y,z,res=0;
    x=pow(abs(a1-b1),2)+pow(abs(a2-b2),2);
    y=pow(abs(c1-b1),2)+pow(abs(c2-b2),2);
   // z=pow(abs(a1-c1),2)+pow(abs(a2-c2),2);
    if(x==y)res=1;
    if(go())res=0;
    if(res)printf("Yes\n");
    else printf("No\n");
    return 0;
}
