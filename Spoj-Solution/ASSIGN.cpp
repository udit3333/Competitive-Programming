//ASSIGN - Assignments
//Dp and Bit-Masking
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
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
#define max_size 20
//std::ios::sync_with_stdio(false);
ll dp[1<<max_size];
int arr[22][22],n;
ll recur(int mask)
{
	if(mask==((1<<n)-1))return 1;
	if(dp[mask]!=-1)return dp[mask];
	int index=__builtin_popcount(mask);
	ll temp=0;
	for(int i=1;i<=n;i++)
	{
		if(arr[index+1][i]==0)continue;
		int t=(mask|(1<<(i-1)));
		if(t==mask)continue;
		temp+=recur(t);
	}
	dp[mask]=temp;
	return dp[mask];
}	
int main()
{
	int t;si(t);
	while(t--)
	{
		si(n);
		rep(i,1<<n)dp[i]=-1;
		rep1(i,n)
		{
			rep1(j,n)si(arr[i][j]);
		}
		printf("%lld\n",recur(0));
	}
    return 0;
}
