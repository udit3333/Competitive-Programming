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
int n,a[1005],b[1005],c[1005],d[1005],e[1005],res[1005];
int main()
{
    
    memset(res,1,sizeof(res));
    si(n);
    int k1=n;
    rep1(i,n){si(a[i]);si(b[i]);si(c[i]);si(d[i]);si(e[i]);}
    rep1(i,n)
    {
        rep1(j,n)
        {
            if(j==i)continue;
            for(int k=j+1;k<=n;k++)
            {
                if(k==i)continue;
                int a1=a[j]-a[i],b1=b[j]-b[i],c1=c[j]-c[i],d1=d[j]-d[i],e1=e[j]-e[i];
                int a2=a[k]-a[i],b2=b[k]-b[i],c2=c[k]-c[i],d2=d[k]-d[i],e2=e[k]-e[i];
                int x=(a1*a2)+(b1*b2)+(c1*c2)+(d1*d2)+(e1*e2);
                if(x>0)
                {
                    k1--;
                    res[i]=0;
                    break;
                }
            }
            if(res[i]==0)break;
        }
    }
    printf("%d\n",k1);
    rep1(i,n)if(res[i])printf("%d\n",i);
    return 0;
}
