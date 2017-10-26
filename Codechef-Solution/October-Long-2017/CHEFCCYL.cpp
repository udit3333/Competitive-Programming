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
#define pii pair<pi,int>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 100005
#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<vector <int> >
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
int arr[maxn],wei[maxn],l[maxn],r[maxn],sum[maxn],cyclel[maxn],s1,n,s2;
vecc adj(maxn);
int go1(int a,int b,int c)
{
   return min((sum[c]-abs(adj[c][a-1]-adj[c][b-1])),abs(adj[c][a-1]-adj[c][b-1]));
}
void go()
{
    cyclel[0]=0;
    rep1(i,n){cyclel[i]=cyclel[i-1]+go1(l[i],r[i],i);}
    s2=cyclel[n];
}
int main(){
	int t;si(t);
    while(t--)
    {
        rep(i,maxn)adj[i].clear();
        s1=0;
        int q;si(n);si(q);
        rep1(i,n)
        {
            sum[i]=0;
            si(arr[i]);
            adj[i].pb(0);
            rep(j,arr[i])
            {
                int x;si(x);adj[i].pb(x);sum[i]+=x;
            }
        }
        rep1(i,n)rep1(j,arr[i])adj[i][j]+=adj[i][j-1];
        wei[0]=0;
        rep1(i,n)
        {
            int x,y,z;si(x);si(y);si(z);
            wei[i]=z+wei[i-1];r[i]=x;l[(i%n)+1]=y;
            s1+=z;
        }
        go();
        while(q--)
        {
            int v1,v2,c1,c2;si(v1);si(c1);si(v2);si(c2);
            if(c2<c1)
            {
                swap(c1,c2);swap(v1,v2);
            }
            int z=cyclel[c2-1]-cyclel[c1];
            int x1=go1(v1,r[c1],c1)+go1(l[c2],v2,c2)+abs(wei[c2-1]-wei[c1-1])+z;
            int x2=go1(l[c1],v1,c1)+go1(v2,r[c2],c2)+(s1-abs(wei[c2-1]-wei[c1-1]))+(s2-cyclel[c2]+cyclel[c1-1]);
            printf("%d\n",min(x1,x2));
        }
    }
    return 0;
}

