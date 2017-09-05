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
char arr[185][185];
bool visit[185][185];
int n,m;
vector<pi > vec;
int bfs(int i,int j)
{if(arr[i][j]=='1')return 0;
int res=INT_MAX;
for(int k=0;k<vec.size();k++)
{
int dis=abs(vec[k].f-i)+abs(vec[k].s-j);
res=min(dis,res);
}
return res;
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
vec.clear();	
scanf("%d",&n);
scanf("%d",&m);
for(int i=1;i<=n;i++)
{
for(int j=1;j<=m;j++)
{cin>>arr[i][j];
if(arr[i][j]=='1')
vec.push_back({i,j});
}
}
for(int i=1;i<=n;i++)
{
for(int j=1;j<=m;j++)
{
cout<<bfs(i,j)<<" ";	
}
cout<<endl;
}
}

return 0;	
}


