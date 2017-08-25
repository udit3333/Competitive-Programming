//SRM 706 DIV 1 250 Pointer
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep2(i,a,b,c) for(int i=a;i<=b;i+=c)
#define pri(a) printf("Case #%d: ",a); 
class MovingCandies {
public:
	int minMoved(vector <string>);
};
vector<string> t1;
int n,m,minn,maxx;
bool visit[21][21][405][405];
bool check(int x,int y)
{
	if(x>=0&&x<n&&y>=0&&y<m)return 1;
	return 0;
}
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};
void go(int x,int y,int val1,int val2)
{
	val1++;
	if(t1[x][y]=='#')val2++;
	if(val1>maxx||(visit[x][y][val1][val2]))return;
	visit[x][y][val1][val2]=1;
	rep(i,4)
	{
		int x1=x+X[i],y1=y+Y[i];
		if(check(x1,y1))go(x1,y1,val1,val2);
	}
}
int MovingCandies::minMoved(vector <string> t) {
  n=t.size();m=t[0].length();
  maxx=0;
  minn=INT_MAX;
  t1.clear();
  memset(visit,0,sizeof(visit));
  rep(i,n)rep(j,m)if(t[i][j]=='#')maxx++;
  rep(i,n)t1.push_back(t[i]);
  go(0,0,0,0);
  rep(i,maxx+1)
  rep(j,maxx+1)
  {
  	if(visit[n-1][m-1][i][j])
  	{
  		minn=min(minn,i-j);
  	}
  }
  if(minn==INT_MAX)return -1;
  return minn;	
}
