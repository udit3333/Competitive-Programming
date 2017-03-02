//CHOCOLA - Chocolate
//Greedy Algorithm
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define si(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define ll long long  int
#define pi pair<int,int>
#define pii pair<int,pi>
#define f first
#define mp make_pair
#define mod 10000007
#define s second
#define pb push_back
//std::ios::sync_with_stdio(false);
int x[1005],y[1005],posx[1005],posy[1005],m,n;
bool comp(int i,int j)
{
	return i>j;
}
int main()
{
	int t;si(t);
	while(t--)
	{
		si(m);si(n);
		rep(i,m-1)si(x[i]);
		rep(i,n-1)si(y[i]);
		sort(x,x+m-1,comp);
		sort(y,y+n-1,comp);
		//rep(i,m-1)cout<<x[i]<<endl;
		int h=1,v=1,res=0,i=0,j=0;
		while(i<m-1&&j<n-1)
		{
			if(x[i]>y[j])
			{
				res+=x[i]*h;
				v++;
				i++;
			}
			else
			{
				res+=y[j]*v;
				h++;
				j++;
			}
		}
		while(i<m-1)
		{
			res+=x[i]*h;
			i++;
		}
		while(j<n-1)
		{
			res+=y[j]*v;
			j++;
		}
		printf("%d\n",res);
	}
    return 0;
}
