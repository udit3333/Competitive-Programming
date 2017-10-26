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
#define INF 1000000000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
int a1[26],a2[26];
int main(){
    int t;si(t);
    while(t--)
    {
    	memset(a1,0,sizeof(a1));
    	memset(a2,0,sizeof(a2));
    	string a,b;cin>>a>>b;
    	rep(i,a.length())a1[a[i]-'a']++;
    	rep(i,b.length())a2[b[i]-'a']++;
    	bool flag=1;
    	rep(i,26)
    	{
    		if(a1[i]!=a2[i]){flag=0;}
    	}
    	if(flag)printf("YES\n");
    	else printf("NO\n");
    }
    return 0;
}

