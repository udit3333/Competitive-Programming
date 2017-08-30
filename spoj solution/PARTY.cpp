#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long  int
#define pi pair<int,int>
#define pii pair<pi,int>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
int cost[105];
int fun[105];
int budget,n;
pi dp[105][505];
pi recur(int start,int p,int f)
{
if(start>=n)
{
//dp[start][p]={p,f};	
return {p,f};
}
if((p+cost[start])>budget)
{
if((dp[start+1][p].f==-1)&&(dp[start+1][p].s==-1))
{
pi x=recur(start+1,p,f);	
dp[start+1][p].f=x.f;
dp[start+1][p].s=x.s-f;
}
return {dp[start+1][p].f,dp[start+1][p].s+f};
}
pi a,b;
if((dp[start+1][p].f==-1)&&(dp[start+1][p].s==-1))
{pi y=recur(start+1,p,f);
	dp[start+1][p]={y.f,y.s-f};	
}
a={dp[start+1][p].f,dp[start+1][p].s+f};
if((dp[start+1][p+cost[start]].f==-1)&&(dp[start+1][p+cost[start]].s==-1))
{pi z=recur(start+1,p+cost[start],f+fun[start]);
	dp[start+1][p+cost[start]]={z.f,z.s-(f+fun[start])};

}
b={dp[start+1][p+cost[start]].f,dp[start+1][p+cost[start]].s+(f+fun[start])};
if(a.s>b.s)
{
dp[start][p]={a.f,a.s-f};	
return a;
}
else if(a.s==b.s)
{
if(a.f<b.f)
{
dp[start][p]={a.f,a.s-f};
return a;
}
else
{
dp[start][p]={b.f,b.s-f};
	return b;	
}
}
else 
{dp[start][p]={b.f,b.s-f};
	return b;
}
}
int main()
{
while(1)
{
for(int i=0;i<105;i++)
{for(int j=0;j<505;j++)
dp[i][j]={-1,-1};
}
scanf("%d",&budget);
scanf("%d",&n);
if(budget==0&&n==0)break;
for(int i=0;i<n;i++)
{
scanf("%d",&cost[i]);
scanf("%d",&fun[i]);
}
pi res=recur(0,0,0);
cout<<res.f<<" "<<res.s<<endl;
}
return 0;	
}


