// Spoj-Solution
//MATGAME - Matrix Game
//consider each row as a different game and find grundy numbers for each row started from the last column of each row.Xor of all grundy number will be zero for a losing state.

#include<bits/stdc++.h>
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
int a[55][55];

int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n,m,res=0;
scanf("%d",&n);
scanf("%d",&m);
for(int i=1;i<=n;i++)
{
for(int j=1;j<=m;j++){
int x;
scanf("%d",&a[i][j]);
}
}
int prev,g;
for(int i=1;i<=n;i++)
{
for(int j=m;j>=1;j--){    
if(j==m)
{
g=a[i][j];
}
else
{
if((a[i][j]-1)<prev)
{
 g=a[i][j]-1;   
}
else g=a[i][j];
}
prev=g;
}
res=res^g;
}
if(res)cout<<"FIRST"<<endl;
else cout<<"SECOND"<<endl;
}

return 0;
}


