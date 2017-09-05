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
vector<vector<int> > v(10005);
bool visit[10005];
void dfs(int j)
{
visit[j]=1;
for(int i=0;i<v[j].size();i++)
{
if(!visit[v[j][i]])
dfs(v[j][i]);
}
}
int main()
{
v.clear();
memset(visit,0,sizeof(visit));
int n,m;
scanf("%d",&n);
scanf("%d",&m);
if(m==(n-1))
{
for(int i=0;i<m;i++)
{
int a,b;
scanf("%d",&a);
scanf("%d",&b);
v[a].push_back(b);
v[b].push_back(a);
}
dfs(1);
int flag=0;
for(int i=1;i<=n;i++)
{
if(!visit[i])
{
flag=1;
break;
}
}
if(flag)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;

}
else
{
cout<<"NO"<<endl;
}
return 0;
}

