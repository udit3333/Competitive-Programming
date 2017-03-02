//PON - Prime or Not
//Miller Robin Test
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
ll mulmod(ll a,ll b,ll c){
    ll x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}
ll modulo(ll a,ll b,ll c){
    ll x=1,y=a;
    while(b > 0){
        if(b%2 == 1){
            x=mulmod(x,y,c);
        }
        y=mulmod(y,y,c); 
        b/=2;
    }
    return x%c;
}
bool check_miller(ll p)
{
	if(p<=1)return 0;
	if(p==2)return 1;
	if(p%2==0)return 0;
	ll s=p-1;
	while(s%2==0)s/=2;
	rep(i,20)
	{
        srand(time(0)); 
		ll a=rand()%(p-1)+1,temp=s,num=modulo(a,s,p);
		if(num==1||num==p-1)continue;
		while(temp<=p-1)
	    {   
	        if(num==p-1)break;
	    	num=mulmod(num,num,p);
	    	temp*=2;
	    }
	    if(num!=p-1)return false;
	}
	return true;
}

int main()
{
	int t;si(t);
	while(t--)
	{
		ll n;sll(n);
		if(check_miller(n))printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}
