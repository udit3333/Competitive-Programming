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
int dp[103][103];
int sum[103][103];
int a[103];
int n;
int recur(int i,int j)
{
if(i>=j)return 0;
int res=INT_MAX;
for(int k=i;k<j;k++)
{
if(dp[i][k]==-1)
{
dp[i][k]=recur(i,k);	
}
if(dp[k+1][j]==-1)
{
dp[k+1][j]=recur(k+1,j);	
}
res=min(res,(dp[i][k]+dp[k+1][j])+(sum[i][k]*sum[k+1][j]));
}
dp[i][j]=res;
return dp[i][j];
}
int main()
{
while(cin>>n)
{
memset(dp,-1,sizeof(dp));	
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++)
{
for(int j=i;j<n;j++)
{
if(i==j)sum[i][j]=a[i];
else{
sum[i][j]=(sum[i][j-1]+a[j])%100;	
}
}
}
cout<<recur(0,n-1)<<endl;
	
}

return 0;
}


