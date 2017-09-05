//MISERMAN - Wise And Miser
//simple dp bottom-up approach 
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long  int
#define pi pair<ll,int>
#define pii pair<pi,int>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
int dp[105][105];
int n,m;
bool check(int i,int j)
{if(i>=0&&i<n&&j>=0&&j<m)return 1;
else return 0;}
int main()
{scanf("%d%d",&n,&m);
rep(i,n)
{
rep(j,m)scanf("%d",&dp[i][j]);    
}
for(int i=1;i<n;i++)
{
rep(j,m)
{int a=INT_MAX,b=INT_MAX,c=INT_MAX;
if(check(i-1,j))a=dp[i-1][j];
if(check(i-1,j-1))b=dp[i-1][j-1];
if(check(i-1,j+1))c=dp[i-1][j+1];
dp[i][j]+=min(a,min(b,c));    
}
}
int res=INT_MAX;
rep(i,m)res=min(res,dp[n-1][i]);
printf("%d\n",res);
return 0;
}

