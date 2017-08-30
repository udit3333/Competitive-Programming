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
vector<vector<int> > vec(2005);
int visit[2005];
int flag;
void dfs(int node,int val)
{
if(visit[node]==-1)
{
visit[node]=val;	
if(val==0)val=1;
else val=0;
for(int i=0;i<vec[node].size();i++)
dfs(vec[node][i],val);
}
else
{
if(val==visit[node])return ;
else
{
flag=1;
return;
}
}
}
int main()
{
int t,c=1;
scanf("%d",&t);
while(t--)
{rep(i,2005)
vec[i].clear();
memset(visit,-1,sizeof(visit));
flag=0;
int n,m;
scanf("%d",&n);
scanf("%d",&m);
rep(i,m)
{
int x,y;	
scanf("%d",&x);
scanf("%d",&y);
vec[x].push_back(y);
vec[y].push_back(x);
}
for(int i=1;i<=n;i++)
{
if(visit[i]==-1)
{
dfs(i,0);
}
}
if(flag==1)
{cout<<"Scenario #"<<c<<":"<<endl;
cout<<"Suspicious bugs found!"<<endl;
}
else
{
cout<<"Scenario #"<<c<<":"<<endl;
cout<<"No suspicious bugs found!"<<endl;
}
c++;

}
return 0;
}


