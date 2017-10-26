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
#define pii pair<pi,ll
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 10005
#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
#define pie 3.14159265358979323846
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
int arr[maxn],n,f;
bool go(double d)
{
	int res=0;
	rep(i,n)
	{
		double t=pie*arr[i]*arr[i];
		t=t/d;
		t=floor(t);
		res+=t;
	}
	if(res>=f)return 1;
	return 0;
}
int main()
{
	int t;si(t);
	while(t--)
	{
		si(n);si(f);f++;
		int minn=INF,maxx=0;
		rep(i,n)
		{
			si(arr[i]);
			minn=min(minn,arr[i]);
			maxx=max(maxx,arr[i]);
		}
		double start=0.0;
		double end=pie*maxx*maxx;
		while(start<end)
		{
			if(abs(start-end)<(0.00001))break;
			double mid=(start+end)/(2.0);
			if(go(mid))start=mid;
			else end=mid;
		}
		printf("%.4f\n",start);
	}
	return 0;
}
