//CADYDIST - Candy Distribution
//Sorting
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;
#define ll long long  int
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
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
ll a[100005],b[100005];
bool comp(ll i,ll j)
{
	return i>j;
}
int main()
{
	while(1)
	{
		ll n,res=0;sll(n);
		if(n==0)break;
		rep(i,n)sll(a[i]);
		rep(i,n)sll(b[i]);
		sort(a,a+n,comp);
		sort(b,b+n);
		rep(i,n)res+=a[i]*b[i];
		printf("%lld\n",res);
	}
    return 0;
}
