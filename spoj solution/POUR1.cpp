//POUR1 - Pouring water
//solution using bfs among different states.
#include <iostream>
#include <algorithm>
#include <cstring>
#include <climits>
#include <queue>
#include <map>
#include <unordered_map>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define si(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define ll long long  int
#define pi pair<int,int>
#define pii pair<int,pi>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
int a,b,c;
int steps()
{
    map<pair<int, int>, bool> m;
    int res=-1;
    queue<pii> q;
    q.push({0,{0,0}});
    while(!q.empty())
    {
        pii temp=q.front();
        q.pop();
        int x=temp.s.f,y=temp.s.s,z=temp.f;
        if(x==c||y==c)
        {
            res=z;
            break;
        }
        if(m[{x,y}]==1)continue;
        m[{x,y}]++;
        q.push({z+1,{0,y}});q.push({z+1,{x,0}});
        q.push({z+1,{x,b}});q.push({z+1,{a,y}});
        if(x+y<a)q.push({z+1,{x+y,0}});
        else q.push({z+1,{a,y-(a-x)}});
        if(x+y<b)q.push({z+1,{0,x+y}});
        else q.push({z+1,{x-(b-y),b}});
    }
    return res;
}
int main()
{
    int t;si(t);
    while(t--)
    {
        si(a);si(b);si(c);
        printf("%d\n",steps());
    }
    return 0;
}

