//MRECAMAN - Recaman’s Sequence
//Ad-hoc
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;
#define ll long long  int
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<=n;i++)
#define si(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define pi pair<int,int>
#define pii pair<int,pi>
#define f first
#define mp make_pair
#define mod 10000007
#define s second
#define pb push_back
//std::ios::sync_with_stdio(false);
ll a[500005];
int main()
{
	unordered_map<ll,bool> m;
	a[0]=0;m[0]++;
	rep1(i,500000)
	{
		if((a[i-1]-i)>0&&m[a[i-1]-i]==0)
		{
			a[i]=a[i-1]-i;
			m[a[i]]++;
		}
		else 
		{
			a[i]=a[i-1]+i;
			m[a[i]]++;
		}
	}
	while(1)
	{
		int n;si(n);
		if(n==-1)break;
		printf("%lld\n",a[n]);
	}
	
    return 0;
}
