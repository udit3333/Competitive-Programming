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
bool check(int i,int j,int n,int m)
{
	if(i>=0&&i<n&&j>=0&&j<m)return 1;
	return 0;
}
int dp[22][22][405];
int X[4]={1,-1,0,0};
int Y[4]={0,0,1,-1};
int MovingCandies::minMoved(vector <string> t) {
  int n=t.size(),m=t[0].length();
  int maxx=0;
  int minn=INT_MAX;
  rep(i,n)rep(j,m)if(t[i][j]=='#')maxx++;
  memset(dp,-1,sizeof(dp));
  rep1(l,maxx)
  {
  	rep(i,n)
  	{
  		rep(j,m)
  		{
  			int x=0,temp=-1;
  			if(t[i][j]=='#')x=1;
  			if(l==1&&i==0&&j==0)dp[i][j][l]=x;
  			if(l==1)continue;
            rep(k,4)
            {
            	int x1=i+X[k],y1=j+Y[k];
            	if(check(x1,y1,n,m)&&dp[x1][y1][l-1]>=0)
            	temp=max(temp,dp[x1][y1][l-1]);
            }
            if(temp!=-1)dp[i][j][l]=x+temp;
  		}
  	}
  }
  rep1(i,maxx)
  {
  	if(dp[n-1][m-1][i]>=0)minn=min(minn,i-dp[n-1][m-1][i]);
  }
  if(minn==INT_MAX)return -1;
  return minn;	
}
