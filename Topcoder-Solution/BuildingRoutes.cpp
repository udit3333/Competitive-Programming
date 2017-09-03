//SRM-622 DIV-1 250 Pointer
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define ll long long  int
#define pi pair<int,int>
int dp[55][55],arr[55][55],load[55][55],n;
bool visit[55][55];
class BuildingRoutes {
public:
	int build(vector <string>, int);
};
void go(int i,int j)
{
	if(i==j)return;
	rep(k,n)
	{
		if(i==k)continue;
		if((arr[i][k]+dp[k][j])==dp[i][j])
		{
			if(!visit[i][k])load[i][k]++;
			visit[i][k]=1;
			go(k,j);
		}
	}
}
int BuildingRoutes::build(vector <string> dist, int T) {
	n=dist[0].length();
	memset(load,0,sizeof(load));
    rep(i,n)
    {
    	rep(j,n)
    	{
    		arr[i][j]=dist[i][j]-'0';
    		dp[i][j]=dist[i][j]-'0';
    	}
    }
    rep(k,n)
    rep(i,n)
    rep(j,n)dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
    rep(i,n)
    rep(j,n)
    {
    	memset(visit,0,sizeof(visit));
    	if(i!=j){go(i,j);}
    }
    int res=0;
    rep(i,n)
    rep(j,n)
    {
    	if(i!=j&&load[i][j]>=T)res+=arr[i][j];
    }
    return res;
}
