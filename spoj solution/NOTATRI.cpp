//NOTATRI - Not a Triangle
//Binary Search
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
ll stick[2005],n,res;
int bs(int start,int end,ll num)
{
	if(stick[start]>num)return start;
	if(start>=end)return -1;
	int mid=(start+end)/2;
	if(stick[mid]>num)bs(start,mid,num);
	else bs(mid+1,end,num);
}
int main()
{
	while(1)
	{
		res=0;
		sll(n);
		if(n==0)break;
		rep(i,n)sll(stick[i]);
		sort(stick,stick+n);
		rep(i,n-2)
		{
			for(int j=i+1;j<n-1;j++)
			{
				int index=bs(j+1,n-1,stick[i]+stick[j]);
				if(index!=-1)res+=n-index;
			}
		}
		printf("%lld\n",res);
		
	}
    return 0;
}
