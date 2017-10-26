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
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 105
#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
ll dp1[maxn][maxn],dp2[maxn][maxn];
int main(){
    int t;si(t);
    while(t--)
    {
    	memset(dp1,0,sizeof(dp1));
    	rep(i,maxn)rep(j,maxn)dp2[i][j]=LLONG_MAX;
    	string s;cin>>s;
    	int n=s.length();
    	for(int i=n-1;i>=0;i-=2)
    	{
    		for(int j=i;j<n;j+=2)
    		{
    			if(i==j)dp1[i][j]=s[i]-'0';
    			else
    			{
    				for(int k=i;k<j;k+=2)
    				{
    					if(s[k+1]=='+')
    					{
    						dp1[i][j]=max(dp1[i][j],dp1[i][k]+dp1[k+2][j]);
    					}
    					else dp1[i][j]=max(dp1[i][j],dp1[i][k]*dp1[k+2][j]);
    				}
    			}
    		}
    	}
    	for(int i=n-1;i>=0;i-=2)
    	{
    		for(int j=i;j<n;j+=2)
    		{
    			if(i==j)dp2[i][j]=s[i]-'0';
    			else
    			{
    				for(int k=i;k<j;k+=2)
    				{
    					if(s[k+1]=='+')
    					{
    						dp2[i][j]=min(dp2[i][j],dp2[i][k]+dp2[k+2][j]);
    					}
    					else dp2[i][j]=min(dp2[i][j],dp2[i][k]*dp2[k+2][j]);
    				}
    			}
    		}
    	}
    	printf("%lld %lld\n",dp1[0][n-1],dp2[0][n-1]);
    }
    return 0;
}

