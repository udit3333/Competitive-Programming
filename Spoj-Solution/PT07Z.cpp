#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int> > v(10005);
bool visit[10005];
int node,maxx;
void dfs(int x,int d)
{
visit[x]=1;
if(v[x].size()==1)
{
if(d>maxx)
{
maxx=d;
node=x;
}
}
//cout<<x<<d<<endl;
d++;
for(int i=0;i<v[x].size();i++)
{
if(!visit[v[x][i]])	
{
dfs(v[x][i],d);	
}
}
	
}
int main()
{
v.clear();
memset(visit,0,sizeof(visit));
node=0;
maxx=0;
int n;
scanf("%d",&n);
for(int i=0;i<n-1;i++)
{
int a,b;
scanf("%d",&a);
scanf("%d",&b);
v[a].push_back(b);
v[b].push_back(a);
}
dfs(1,0);
//cout<<node;
maxx=0;
memset(visit,0,sizeof(visit));
dfs(node,0);
//cout<<node;
cout<<maxx<<endl;
//cout<<v[12][0]<<v[12][1];
return 0;	
}
