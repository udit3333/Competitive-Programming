#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep2(i,a,b,c) for(int i=a;i<=b;i+=c)
#define pri(a) printf("Case #%d: ",a);
#define INF 100005 
class RepeatString {
public:
	int minimalModify(string);
};
int dp[55][55],n,m;
string s1,s2;
int recur(int x,int y)
{
	if(x==n&&y==m)return 0;
	if(dp[x][y]!=-1)return dp[x][y];
	dp[x][y]=INF;
	if(x<n&&y<m)
	{
		if(s1[x]==s2[y])dp[x][y]=min(dp[x][y],recur(x+1,y+1));
	}
	if(x<n)
	{
		dp[x][y]=min(dp[x][y],1+recur(x+1,y));
	}
	if(y<m)
	{
		dp[x][y]=min(dp[x][y],1+recur(x,y+1));
	}
	if(x<n&&y<m)
	{
		dp[x][y]=min(dp[x][y],1+recur(x+1,y+1));
	}
	return dp[x][y];
}
int RepeatString::minimalModify(string s) {
	s1=s;s2="";
	n=s.length();m=0;
	int res=INF,l=n-1;
    while(1)
    {
        memset(dp,-1,sizeof(dp));
    	res=min(res,recur(0,0));
        if(s1.empty())break;
        char c=s1[l];
        s1.pop_back();s2=c+s2;
        n--;m++;l--;
    }
    return res;
}

