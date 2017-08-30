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
string s;
int dp[6105][6105];
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
cin>>s;
for(int i=s.length()-1;i>=0;i--)
{
for(int j=0;j<s.length();j++)
{
if(i>=j)
{dp[i][j]=0;
continue;
}
if(s[i]==s[j])
dp[i][j]=dp[i+1][j-1];
else
dp[i][j]=min(dp[i+1][j],dp[i][j-1])+1;
}
}

cout<<dp[0][s.length()-1]<<endl;	
}
return 0;	
}


