#include <iostream>
#include <vector>
using namespace std;
#define ll long long  int
#define rep(i,n) for(int i=0;i<n;i++)
#define si(x) scanf("%d",&x)
#define pb push_back
#define pi pair<int,int>
#define f first
#define s second
#define maxn 100005
#define vecc vector<vector<int> >
pi query[maxn];
vecc adj(maxn);
int level[maxn],pos[maxn],sub[maxn];
int bit1[maxn],bit2[maxn];
int z;
int dfs(int x,int y)
{
    int res=1;level[x]=y;pos[x]=z++;
    rep(i,adj[x].size())res+=dfs(adj[x][i],y+1);
    sub[x]=res;
    return res;
}
void update1(int ind,ll val)
{
    while(ind<maxn)
    {
        bit1[ind]+=val;
        ind+=ind&(-ind);
    }
}
int query1(int ind)
{
    int res=0;
    while(ind>0)
    {
        res+=bit1[ind];
        ind-=ind&(-ind);
    }
    return res;
}
void update2(int ind,ll val)
{
    while(ind<maxn)
    {
        bit2[ind]+=val;
        ind+=ind&(-ind);
    }
}
int query2(int ind)
{
    int res=0;
    while(ind>0)
    {
        res+=bit2[ind];
        ind-=ind&(-ind);
    }
    return res;
}

int main(){
    int t;si(t);
    while(t--)
    {
        z=1;
        rep(i,maxn){adj[i].clear();bit1[i]=0;bit2[i]=0;}
        int m;si(m);
        int cnt=1;
        rep(i,m)
        {
            int x,y;si(x);si(y);
            if(x==0)
            {
                adj[y].pb(cnt++);
            }
            query[i].f=x;
            query[i].s=y;
        }
        dfs(0,0);
        rep(i,cnt)
        {
            if(level[i]%2)update1(pos[i],1);
            else update2(pos[i],1);
        }
        cnt--;
        vector<ll> res;
        for(int i=m-1;i>=0;i--)
        {
            if(query[i].f==0)
            {
                if(level[cnt]%2)update1(pos[cnt],-1);
                else update2(pos[cnt],-1);
                cnt--;
            }
            else
            {
                int v=query[i].s;
                ll a,b;
                a=query1(pos[v]+sub[v]-1)-query1(pos[v]-1);
                b=query2(pos[v]+sub[v]-1)-query2(pos[v]-1);
                ll temp=(a*(a-1))/2;
                temp+=(b*(b-1))/2;
                res.pb(temp);
            }
        }
        int x1=res.size();
        for(int i=x1-1;i>=0;i--)printf("%lld\n",res[i]);
    }
    return 0;
}










