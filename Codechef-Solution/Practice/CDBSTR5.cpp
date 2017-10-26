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
#define maxn 10005
#define INF 1000000000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<vector<int> > 

vecc adj(maxn);

int n,last,dist;
bool visit[maxn];

void go(int x)
{
    memset(visit,0,sizeof(visit));
    queue<pi> q;
    q.push({x,0});
    visit[x]=1;
    while(!q.empty())
    {
        pi t=q.front();q.pop();
        last=t.f;dist=t.s;
        rep(i,adj[t.f].size())
        {
            if(!visit[adj[t.f][i]])
            {
                visit[adj[t.f][i]]=1;
                q.push({adj[t.f][i],t.s+1});
            }
        }
    }

}
int main(){
    int t;si(t);
    while(t--)
    {
        rep(i,maxn)adj[i].clear();
        si(n);
        last=0;dist=0;
        rep(i,n-1)
        {
            int x,y;si(x);si(y);
            adj[x].pb(y);
            adj[y].pb(x);
        }
        go(1);
        go(last);
        printf("%d\n",dist);
    }
    return 0;
}

