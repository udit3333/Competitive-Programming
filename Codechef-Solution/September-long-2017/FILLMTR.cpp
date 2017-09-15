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
int arr[maxn],coun[maxn],res,n;
bool visit[maxn];
vector<vector<int> > adj(maxn);
map<pi,int> m;
void check(int x,int y)
{
    int z=m[{min(x,y),max(x,y)}];
    if(coun[x]==0&&coun[y]==0)
    {
        arr[x]=0;coun[x]=1;
        arr[y]=z;coun[y]=1;
    }
    else if(coun[x]==1&&coun[y]==0)
    {
        if(arr[x])
        {
            if(z)arr[y]=0;
            else arr[y]=1;
        }
        else
        {
            arr[y]=z;
        }
        coun[y]=1;
    }
    else if(coun[x]==0&&(coun[y]==1))
    {
        if(arr[y])
        {
            if(z)arr[x]=0;
            else arr[x]=1;
        }
        else
        {
            arr[x]=z;
        }
        coun[x]=1;
    }
    else if(arr[x]==arr[y])
    {
        if(z){res=0;}
    }
    else
    {
        if(z==0){res=0;}
    }
}
void bfs(int x)
{
    queue<int> q;
    q.push(x);
    while(!q.empty())
    {
        int y=q.front();q.pop();
        if(visit[y])continue;
        visit[y]=1;
        rep(i,adj[y].size())
        {
            check(y,adj[y][i]);
            q.push(adj[y][i]);
        }
    }
}
int main()
{
    int t;si(t);
    while(t--)
    { 
        m.clear();
        int q;si(n);si(q);
        rep1(i,n){coun[i]=0;visit[i]=0;adj[i].clear();arr[i]=0;}
        res=1;
        while(q--)
        {
            int x,y,z;
            si(x);si(y);si(z);
            if(x>y)swap(x,y);
            if(x==y)
            {
                if(z){res=0;}continue;
            }
            if(m.find({x,y})!=m.end())
            {
                if(m[{x,y}]!=z){res=0;}continue;
            }
            m[{x,y}]=z;
        }
        if(res==0){printf("no\n");continue;}
        for(auto it=m.begin();it!=m.end();it++)
        {
            int x=it->f.f,y=it->f.s,z=it->s;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        rep1(i,n)
        {
            if(!visit[i]&&adj[i].size()>0)
            {
                arr[i]=0;coun[i]=1;
                bfs(i);
                if(res==0)break;
            }
        }
        if(res)printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
