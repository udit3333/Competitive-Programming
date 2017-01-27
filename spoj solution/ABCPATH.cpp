//ABCPATH - ABC Path
//Bfs traversal
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
int n,m;
char arr[55][55];
int x[8]={0,0,1,1,1,-1,-1,-1};
int y[8]={1,-1,0,-1,1,0,-1,1};
bool check(int i,int j)
{
  if(i>=0&&i<n&&j>=0&&j<m) return 1;
  else return 0;
}
int travel(int i,int j)
{  
  bool visit[55][55];
  memset(visit,0,sizeof(visit));
  int res=1;
  queue <pii> q;
  q.push({{i,j},1});
  while(!q.empty())
  {
    pii temp=q.front();
    int a=temp.f.f,b=temp.f.s;
    q.pop();
    res=max(res,temp.s);
    if(!visit[a][b]){
    rep(i,8)
    {
      int x1=x[i]+a,y1=y[i]+b;
      if(check(x1,y1)&&(arr[x1][y1]==(arr[a][b]+1)))q.push({{x1,y1},temp.s+1});
      }}
    visit[a][b]=1;
   }
return res;
}
int main()
{
  int c=1;
  while(1){
    int res=0;
    scanf("%d%d",&n,&m);
    if(n==0&&m==0)break;
    rep(i,n)
    {
      rep(j,m)cin>>arr[i][j];    
    }
    rep(i,n)
    {
    rep(j,m)if(arr[i][j]=='A')res=max(res,travel(i,j));    
    }
    printf("Case %d: %d\n",c,res);
    c++;
  }
return 0;
}

