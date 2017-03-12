//ANARC08H - Musical Chairs
//josephus problem 
// simple recursive structure f(n,d)=(f(n-1,d)+d-1)%n+1;
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
	while(1)
	{
		int n,d;si(n);si(d);
		if(n==0&&d==0)break;
	    int start=1,res=1;
	    for(int i=2;i<=n;i++)
	    {
	    	res=(start+d-1)%i+1;
	    	start=res;
	    }
	    printf("%d %d %d\n",n,d,res);
	}

    return 0;
}
