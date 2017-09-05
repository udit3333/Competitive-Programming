//EDIST - Edit distance
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int l1,l2;
string a,b;
int dp[2005][2005];
int recur(int i,int j)
{
if(i==l1)
return (l2-j);
if(j==l2)
return (l1-i);
if(a[i]==b[j])
{
if(dp[i+1][j+1])
return dp[i+1][j+1];
else{
dp[i+1][j+1]=recur(i+1,j+1);
return dp[i+1][j+1];}
}
int x1,x2,x3;
if(dp[i+1][j+1])
x1=1+dp[i+1][j+1];
else{
dp[i+1][j+1]=recur(i+1,j+1);
x1=1+dp[i+1][j+1];
}
if(dp[i+1][j])
x2=1+dp[i+1][j];
else{
dp[i+1][j]=recur(i+1,j);
x2=1+dp[i+1][j];
}
if(dp[i][j+1])
x3=1+dp[i][j+1];
else{
dp[i][j+1]=recur(i,j+1);
x3=1+dp[i][j+1];
}
dp[i][j]=min(x1,min(x2,x3));

return dp[i][j];
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
memset(dp,0,sizeof(dp));
cin>>a;
cin>>b;
l1=a.length();
l2=b.length();
int res=recur(0,0);
cout<<res<<endl;
}
return 0;	
}
