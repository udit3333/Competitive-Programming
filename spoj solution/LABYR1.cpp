//LABYR1 - Labyrinth
//Apply bfs on any node of value '.' to find the furthest node from it and from that node again apply bfs to find the furthest node and 
//that distance is maximum length of rope required.
//Time Complexity O(V) V-number of vertices in graph.
//Resources for correctness proof of above algorithm - http://stackoverflow.com/questions/20010472/proof-of-correctness-algorithm-for-diameter-of-a-tree-in-graph-theory
#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define ll long long  int
#define pi pair<int,int>
#define pii pair<pi,int>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
int n,m,i1,i2;
char arr[1005][1005];
int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};
bool check(int i,int j)
{
  if(i>=0&&i<n&&j>=0&&j<m) return 1;
  else return 0;
}
int travel(int i,int j)
{
  bool visit[1005][1005];
  memset(visit,0,sizeof(visit));
  int res=0;
  queue <pii> q;
  q.push({{i,j},0});
  while(!q.empty())
  {
    pii temp=q.front();
    int a=temp.f.f,b=temp.f.s;
    q.pop();
    if(temp.s>=res)
    {
    res=temp.s;
    i1=a;
    i2=b;
    }
    if(!visit[a][b]){
    rep(i,4)
      {
      int x1=x[i]+a,y1=y[i]+b;
      if(check(x1,y1)&&(arr[x1][y1]=='.'))q.push({{x1,y1},temp.s+1});
      }}
    visit[a][b]=1;
    }
  return res;
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--){
    int res=0,x=-1,y=-1;
    scanf("%d%d",&m,&n);
    rep(i,n)
    {
      rep(j,m)
      {
        cin>>arr[i][j];
        if(arr[i][j]=='.')
        {x=i;
         y=j;
         }
      }
    }
    if(x!=-1&&y!=-1){
    travel(x,y);
   res=travel(i1,i2);
   }
   printf("Maximum rope length is %d.\n",res);
  }
return 0;
}

