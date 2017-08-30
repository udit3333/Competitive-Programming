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
int n;
int arr[2005];
int dp1[2005][2005];
int dp2[2005][2005];
int recur(int i,int j,int day)
{
if(i>j)return 0;
if(i==j)return day*arr[i];
if(dp1[i+1][j]==0&&dp2[i+1][j]==0)
{dp1[i+1][j]=recur(i+1,j,0);
dp2[i+1][j]=recur(i+1,j,1)-dp1[i+1][j];
}
if(dp1[i][j-1]==0&&dp2[i][j-1]==0)
{dp1[i][j-1]=recur(i,j-1,0);
dp2[i][j-1]=recur(i,j-1,1)-dp1[i][j-1];
}
dp1[i][j]=max(dp2[i+1][j]+dp1[i+1][j],dp2[i][j-1]+dp1[i][j-1]);
dp2[i][j]=max(arr[i]+(2*dp2[i+1][j]+dp1[i+1][j]),arr[j]+(2*dp2[i][j-1]+dp1[i][j-1]))-dp1[i][j];
return day*dp2[i][j]+dp1[i][j];
}
int main()
{
memset(dp1,0,sizeof(dp1));	
memset(dp2,0,sizeof(dp2));	
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
cout<<recur(0,n-1,1)<<endl;

return 0;	
}


