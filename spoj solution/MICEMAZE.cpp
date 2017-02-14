//MICEMAZE - Mice and Maze
//Dijkstra algorithm 
//Time Complexity= O(V*E*log(V))
#include <iostream>
#include <algorithm>
#include <cstring>
#include <climits>
#include <vector>
#include <queue>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define si(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define ll long long  int
#define pi pair<int,int>
#define pii pair<int,pi>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxx 1e6
//std::ios::sync_with_stdio(false);
vector<vector<pi> > vec(105);
int n,e,t;
bool visit[105];
int dis[105];
struct compare  
{  
  bool operator()(const pi& l, const pi& r)  
  {  
      return l.f > r.f;  
  }  
}; 

int dijkstra(int vertex)
{
   rep1(i,n)dis[i]=maxx;
   memset(visit,0,sizeof(visit));
   int res=0;
   priority_queue<pi,vector<pi>, compare > pq;  
   pq.push({0,vertex});dis[vertex]=0;
   while(!pq.empty())
   {
       pi temp=pq.top();
       pq.pop();
       int x=temp.f,y=temp.s;
       if(visit[y])continue;
       visit[y]=1;
       for(int i=0;i<vec[y].size();i++)
       {
           int y1=vec[y][i].f,x1=vec[y][i].s;
           if(dis[y1]>dis[y]+x1)
           {
               dis[y1]=dis[y]+x1;
               pq.push({dis[y1],y1});
           }
       }
       
   }
   return dis[e];
}

int main()
{
    vec.clear();
    int res=0;
    si(n);si(e);si(t);
    int m;si(m);
    while(m--)
    {
        int a,b,z;si(a);si(b);si(z);
        vec[a].pb({b,z});
    }
    rep1(i,n)if(dijkstra(i)<=t)res++;
    printf("%d\n",res);
    return 0;
}

