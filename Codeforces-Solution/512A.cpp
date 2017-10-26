#include <iostream>
#include <algorithm>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include <cmath>
#include <unordered_map>
#include <sstream>
#include <utility>
#include <iterator>
#include <vector>
#include <stack>
#include <cstdio>
#include <climits> 
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <string>
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
#define mod 5000000
#define s second
#define pb push_back
#define maxn 505
#define INF 10000000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>

string arr[105];
bool adj[26][26];
bool visit[26];
int indegree[26];

string go()
{
    string t1;
    queue<int> q;
    rep(i,26)if(indegree[i]==0){q.push(i);}
    while(!q.empty())
    {
        int x=q.front();q.pop();
        char c=x+97;
        t1.pb(c);
        rep(i,26)
        {
            if(adj[x][i])
            {
                indegree[i]--;
                if(indegree[i]==0)q.push(i);
            }
        }
    }
    return t1;
}

int main(){
    int n;si(n);
    rep(i,n)cin>>arr[i];
    bool flag=0;
    vector<int> temp;
    rep(i,n-1)
    {
        int x1=arr[i].length(),x2=arr[i+1].length();
        int l=0;
        while(l<x1&&arr[i][l]==arr[i+1][l])l++;
        if(l==x2){flag=1;break;}
        if(l==x1)continue;
        adj[arr[i][l]-'a'][arr[i+1][l]-'a']=1;
    }
    rep(i,26)rep(j,26)if(adj[i][j])indegree[j]++;
    if(flag){printf("Impossible\n");}
    else
    {
        string s=go();
        if(s.length()==26)cout<<s<<endl;
        else printf("Impossible\n");
    }
    return 0;
}


