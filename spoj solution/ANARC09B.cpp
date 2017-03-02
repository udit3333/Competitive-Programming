    //ANARC09B - Tiles of Tetris, Not!
    //Gcd
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
    #define mod 1000000007
    #define s second
    #define pb push_back
    //std::ios::sync_with_stdio(false)
    ll gcd(ll a,ll b)
    {
    	if(a==0)return b;
    	return gcd(b%a,a);
    }
    int main()
    {
    	while(1)
    	{
    		ll a,b,res;sll(a);sll(b);
    		if(a==0)break;
    		ll x=gcd(a,b);
    		res=(a/x)*(b/x);
    		printf("%lld\n",res);
    	}
        return 0;
    }
