#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep2(i,a,b,c) for(int i=a;i<=b;i+=c)
#define pri(a) printf("Case #%d: ",a);
#define INF 100005 
class PartisanGame {
public:
	string getWinner(int, vector <int>, vector <int>);
};
int dp[1026][35];
string PartisanGame::getWinner(int n, vector <int> a, vector <int> b) {
	int ini=0;
	rep1(i,4)
	{
		int x=0;
		rep(j,a.size())
		{
			if((i-a[j])>=0&&(ini&(1<<(i-a[j]+5)))==0)x=1;
		}
		if(x)ini+=(1<<i);
        x=0;
        rep(j,b.size())
		{
			if((i-b[j])>=0&&(ini&(1<<(i-b[j])))==0)x=1;
		}
		if(x)ini+=(1<<(i+5));
	}
	rep(i,35)
	{
		rep(j,1025)
		{
			if(i==0)
			{
				int x=j;
				    int x1=0,t=0;
					rep(k,a.size())
					{
						if((5-a[k])>=0&&(x&(1<<(10-a[k])))==0)x1=1;
					}
					if(x1){t+=(1<<(4));}
				    x1=0;
				    rep(k,b.size())
					{
						if((5-b[k])>=0&&(x&(1<<(5-b[k])))==0)x1=1;
					}
					if(x1){t+=(1<<(9));}
					rep(i,10)
					{
						if(i==0||i==5)continue;
						if((1<<i)&x)t+=(1<<(i-1));
					}
				dp[j][i]=t;
			}
			else dp[j][i]=dp[dp[j][i-1]][i-1];
		}
	}
 	while(n>=5){int x=log2(n-4);ini=dp[ini][x];n-=1<<x;}
    if(n<5)
	{
		if(ini&(1<<n))return "Alice"; 
		else return "Bob"; 
	}
}
