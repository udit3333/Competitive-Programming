//ACPC10D - Tri graphs
//simple solution using dynammic programming with bottom-up approach.
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
ll dp[100005][3];
int n;
bool check(int i,int j)
{if(i==0&&j==0)return 0;
if(i>=0&&i<n&&j>=0&&j<3)return 1;
else return 0;
}
int main()
{int k=1;
while(1)
{scanf("%d",&n);if(n==0)break;
rep(i,n)
{
rep(j,3)scanf("%lld",&dp[i][j]);    
}
rep(i,n)
{
rep(j,3)
{if(i==0&&(j==0||j==1))continue;
ll a=LLONG_MAX,b=LLONG_MAX,c=LLONG_MAX,d=LLONG_MAX;
if(check(i-1,j))a=dp[i-1][j];
if(check(i,j-1))b=dp[i][j-1];
if(check(i-1,j-1))c=dp[i-1][j-1];
if(check(i-1,j+1))d=dp[i-1][j+1];
dp[i][j]+=min(min(a,d),min(b,c));    
}
}
printf("%d. %lld\n",k, dp[n-1][1]);k++;
}
return 0;
}

