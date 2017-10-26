#include <vector>
#include <stack>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <string>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <climits> 
#include <cmath>
#include <unordered_map>
#include <sstream>
#include <utility>
#include <iterator>
using namespace std;
#define ll long long  int
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep2(i,a,b,c) for(int i=a;i<=b;i+=c)
#define si(x) scanf("%d",&x)
#define sd(x) scanf("%lf",&x)
#define sf(x) scanf("%f",&x)
#define sll(x) scanf("%lld",&x)
#define pi pair<int,int>
#define pii pair<pi,ll>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 1000005
#define INF 10000000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<vector<double> >
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
int arr[maxn];
int f,s,g,u,d;
void recur(int x,int y)
{
    queue<pi> q;
    q.push({x,y});
    arr[x]=y;
    while(!q.empty())
    {
        pi temp=q.front();q.pop();
        if(((temp.f+u)<=f)&&(arr[temp.f+u]==-1))
        {
            arr[temp.f+u]=temp.s+1;
            q.push({temp.f+u,temp.s+1});
        }
        if(((temp.f-d)>=1)&&(arr[temp.f-d]==-1))
        {
            arr[temp.f-d]=temp.s+1;
            q.push({temp.f-d,temp.s+1});
        }
    }
}
int main()
{
    si(f);si(s);si(g);si(u);si(d);
    memset(arr,-1,sizeof(arr));
    recur(s,0);
    if(arr[g]==-1)printf("use the stairs\n");
    else printf("%d\n",arr[g]);
    return 0;
}