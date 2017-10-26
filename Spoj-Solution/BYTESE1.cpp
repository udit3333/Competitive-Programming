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
#define mod 5000000
#define s second
#define pb push_back
#define maxn 105
#define INF 10000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
struct compare  
{  
  bool operator()(const pii& l, const pii& r)  
  {  
      return l.s > r.s;  
  }  
};
int x1[4]={0,0,1,-1};
int Y1[4]={1,-1,0,0};
int arr[maxn][maxn],n,m,dist[maxn][maxn];
bool visit[maxn][maxn];
bool check(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m)return 1;
    return 0;
}
void go()
{
    rep(i,maxn)rep(j,maxn)dist[i][j]=INF;
    dist[1][1]=arr[1][1];
    memset(visit,0,sizeof(visit));
    visit[1][1]=1;
    priority_queue<pii,vector<pii>,compare > pq;
    pq.push({{1,1},arr[1][1]});
    while(!pq.empty())
    {
        pii temp=pq.top();pq.pop();
        int x=temp.f.f,y=temp.f.s,z=temp.s;
        rep(i,4)
        {
            int X=x+x1[i],Y=y+Y1[i];
            if(check(X,Y)&&(!visit[X][Y])&&(dist[X][Y]>=dist[x][y]+arr[X][Y]))
            {
                visit[X][Y]=1;
                dist[X][Y]=dist[x][y]+arr[X][Y];
                pq.push({{X,Y},dist[X][Y]});
            }
        }
    }
}


int main(){
    int t;si(t);
    while(t--)
    {
        si(n);si(m);
        rep1(i,n)rep1(j,m)si(arr[i][j]);
        int a,b,T;si(a);si(b);si(T);
        go();
        if(dist[a][b]<=T)
        {
            printf("YES\n%d\n",T-dist[a][b]);
        }
        else printf("NO\n");
    }
    return 0;
}


