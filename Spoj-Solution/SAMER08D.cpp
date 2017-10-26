#include <iostream>
#include <algorithm>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include <cmath>
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
#define maxn 1005
#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
int dp[maxn][maxn],n1,n2,k;
string s1,s2;
int recur(int x,int y)
{
    if(x==n1||y==n2)return 0;
    if(dp[x][y]!=-1)return dp[x][y];
    int x1=x,x2=y,x3=0;
    while((s1[x1]==s2[x2])&&x1<n1&&x2<n2)
    {
        x3++;x1++;x2++;
        if(x3>=k)dp[x][y]=max(dp[x][y],x3+recur(x1,x2));
    }
    dp[x][y]=max(dp[x][y],recur(x+1,y));
    dp[x][y]=max(dp[x][y],recur(x,y+1));
    return dp[x][y];
}
int main(){
    while(1)
    {
        memset(dp,-1,sizeof(dp));
        si(k);if(k==0)break;
        cin>>s1>>s2;
        n1=s1.length();n2=s2.length();
        printf("%d\n",recur(0,0));
    }
    return 0;
}




