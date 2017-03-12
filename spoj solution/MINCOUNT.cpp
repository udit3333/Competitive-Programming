//MINCOUNT - Move To Invert
//let assume that we will use kth row from above as first row of inverted structure after differentiating 
//for minima we get k=(n+2)/3 by pluging the value of k we get min number of coins i.e floor[(tn)/6]
//where tn is total number of coins
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>
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
#define INF 1e7
#define NIL 0
//std::ios::sync_with_stdio(false);

int main()
{
	int t;si(t);
	while(t--)
	{
		ll n;sll(n);
		ll res=(n*(n+1))/6;
		printf("%lld\n",res);

	}

    return 0;
}
