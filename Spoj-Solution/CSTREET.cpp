//CSTREET - Cobbled streets
//construct Minimum Spanning Tree using Kruskal's Algorithm and with the Disjoint-Set Data Structure
#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define ll long long  int
#define pi pair<int,int>
#define pii pair<int,pi>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb 
pii edges[300005];
int par[1005],ran[1005];
void create(int x)
{
par[x]=x;
ran[x]=0;
}
int fiind(int x)
{
if(par[x]!=x)par[x]=fiind(par[x]);
return par[x];
}
void merge(int x,int y)
{
int px=fiind(x),py=fiind(y);
if(ran[px]<ran[py])
par[px]=py;
else par[py]=px;
if(ran[px]==ran[py])ran[px]++;
}
int main()
{int t;
scanf("%d",&t);
while(t--){
memset(par,0,sizeof(par));
memset(ran,0,sizeof(ran));
int p,n,m;
ll res=0;
scanf("%d%d%d",&p,&n,&m);
rep(i,m)
scanf("%d%d%d",&edges[i].s.f,&edges[i].s.s,&edges[i].f);    
sort(edges,edges+m);
rep(i,m)
{int a=edges[i].s.f,b=edges[i].s.s,c=edges[i].f;
if(fiind(a)==0||fiind(b)==0){
if(fiind(a)==0)create(a);
if(fiind(b)==0)create(b);
merge(a,b);
res+=c;
}
else if(fiind(a)!=fiind(b))
{
merge(a,b);
res+=c;
}
}
printf("%lld\n",res*p);
}
return 0;
}

