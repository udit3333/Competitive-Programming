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
ll n;
ll arr[10005];
ll dp[10005];
ll recur(ll i)
{
if(i>=n)return 0;
if(dp[i+1]==-1)
dp[i+1]=recur(i+1);
if(dp[i+2]==-1)
dp[i+2]=recur(i+2);
dp[i]=max(dp[i+1],dp[i+2]+arr[i]);
return dp[i];
}

int main()
{
int c=1;	
int t;
scanf("%d",&t);
while(t--)
{
memset(dp,-1,sizeof(dp));	
scanf("%lld",&n);
for(int i=0;i<n;i++)
scanf("%lld",&arr[i]);
cout<<"Case "<<c<<": "<<recur(0)<<endl;
c++;
}
return 0;	
}


