#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[105][105];
int dp[105][105];
int n,m;
int recur(int i,int j)
{
if(i==n-1)
{
dp[i][j]=a[i][j];
return dp[i][j];
}
if(i<0||i>=n)
return 0;
if(j<0||j>=m)
return 0;
if(!dp[i+1][j])
dp[i+1][j]=recur(i+1,j);
if(!dp[i+1][j+1])
dp[i+1][j+1]=recur(i+1,j+1);
if(!dp[i+1][j-1])
dp[i+1][j-1]=recur(i+1,j-1);
dp[i][j]=max(dp[i+1][j],max(dp[i+1][j+1],dp[i+1][j-1]))+a[i][j];

return dp[i][j];

}

int main()
{
int t;
scanf("%d",&t);
while(t--)
{
memset(dp,0,sizeof(dp));	
//int n,m;
scanf("%d",&n);
scanf("%d",&m);
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
scanf("%d",&a[i][j]);
}
int res=INT_MIN;
for(int i=0;i<m;i++)
{
res=max(res,recur(0,i));
}
cout<<res<<endl;
}
return 0;	
}
