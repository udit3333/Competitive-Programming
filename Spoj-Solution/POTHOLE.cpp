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
#include <climits> 
#include <cmath>
#include <unordered_map>
#include <sstream>
#include <utility>
#include <iterator>
using namespace std;
#define ll long long  int
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep2(i,a,b,c) for(int i=a;i<=b;i+=c)
#define si(x) scanf("%d",&x)
#define sd(x) scanf("%lf",&x)
#define sf(x) scanf("%f",&x)
#define sll(x) scanf("%lld",&x)
#define pi pair<ll,ll>
#define pii pair<pi,ll
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 205
#define INF 10000008
#define NIL 0
#define one 1ll
#define block 317
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
class max_flow{
    // maxn number of nodes.
    public:
        int cap[maxn][maxn],source,sink,from[maxn];
        bool visit[maxn];// cap initial residual network.
        vector<vector<int> > adj;
        max_flow(int a,int b)
        {
            source=a;
            sink=b;
            vector<int> temp;
            for(int i=0;i<=maxn;i++)adj.push_back(temp);
            memset(cap,0,sizeof(cap));
        }
        void add(int x,int y,int z)
        {
            //add a edge
            cap[x][y]+=z;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int solve()
        {
            int res=0;
            while(1)
            {
                int x=bfs();
                if(x==0)break;
                res+=x;
            }
            return res;// max flow 
        }
        int bfs()
        {
            queue<int> q;
            memset(from,0,sizeof(from));
            memset(visit,0,sizeof(visit));
            q.push(source);
            visit[source]=1;
            while(!q.empty())
            {
                int x=q.front();
                q.pop();
                if(x==sink)break;
                for(int i=0;i<adj[x].size();i++)
                {
                    if(cap[x][adj[x][i]]>0&&(!visit[adj[x][i]]))
                    {
                        visit[adj[x][i]]=1;
                        from[adj[x][i]]=x;
                        q.push(adj[x][i]);
                    }
                }
            }
            int curr=sink,path_cap=INT_MAX;
            while(from[curr])
            {
                int x=from[curr];
                path_cap=min(path_cap,cap[x][curr]);
                curr=from[curr];
            }
            if(path_cap==INT_MAX)return 0;
            curr=sink;
            while(from[curr])
            {
                int x=from[curr];
                cap[x][curr]-=path_cap;
                cap[curr][x]+=path_cap;
                curr=from[curr];
            }
            return path_cap;
        }
};
int main()
{
    int t;si(t);
    while(t--)
    {
        int n;si(n);
        max_flow d(1,n);
        rep1(i,n-1)
        {
            int m;si(m);
            rep(j,m)
            {
                int x;si(x);
                if(i==1||x==n)
                {
                    d.add(i,x,1);
                }
                else d.add(i,x,maxn);
            }
        }
        printf("%d\n",d.solve());
    }
    return 0;
}
