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
#include <sstream>
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
#define maxn 50005
#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<vector<pair<int,ll> > >
#define pie 3.14159265358979323846
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
int n;
struct compare  
{  
  bool operator()(const pi& l, const pi& r)  
  {  
      return l.f > r.f;  
  }  
}; 
vecc adj(maxn);// adj list.
class dijkstra{
	// maxn-maximum number of nodes.
	// source-where to apply dikstra.
	// INF - infinite value.
public:
	ll dist[maxn],source;
	bool visit[maxn];
	dijkstra(int s){
		source=s;
		rep1(i,n)visit[i]=0;
		rep1(i,n)dist[i]=INF;
		//memset(visit,0,sizeof(visit));
		//for(int i=0;i<maxn;i++)dist[i]=INF;
		dist[source]=0;
	    priority_queue<pi,vector<pi>, compare > pq; 
	    pq.push({0,source});
	    visit[source]=1;
	    while(!pq.empty())
	    {
	    	pi temp=pq.top();pq.pop();
	    //	cout<<temp.f<<endl;
            for(int i=0;i<adj[temp.s].size();i++)
            {

            	int x=adj[temp.s][i].f;
            	ll y=-adj[temp.s][i].s;
            	if((!visit[x])&&((dist[temp.s]+y)<dist[x]))
            	{
                    visit[x]=1;
            		dist[x]=dist[temp.s]+y;
            		pq.push({dist[x],x});
            	}
            }
	    }
	}
};
int main()
{
	int t;si(t);
	while(t--)
	{
		rep(i,n+1)adj[i].clear();
		si(n);
		rep(i,n-1)
		{
			int a,b,c;si(a);si(b);si(c);
			adj[a].pb({b,c});
			adj[b].pb({a,c});
		}
		ll res=0,maxx=0,x;
		dijkstra d(1);
		rep1(i,n)
		{
			if((-d.dist[i])>maxx)
			{
				x=i;maxx=-d.dist[i];
			}
		}
		dijkstra d1(x);
		rep1(i,n)res=max(res,-d1.dist[i]);
		printf("%lld\n",res);
	}
	return 0;
}
