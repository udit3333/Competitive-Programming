    //DSUBSEQ - Distinct Subsequences
    //Dp
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
    ll dp[100005];
    int last[30];
    int main()
    {
    	int t;si(t);
    	while(t--)
    	{
    		string s;
    		cin>>s;
    		int n=s.length();
    		ll x;
    		dp[0]=1;
    		memset(last,-1,sizeof(last));
    		rep1(i,n)
    		{
    		    if(last[s[i-1]-65]==-1)x=dp[i-1];
    		    else x=(dp[i-1]-dp[last[s[i-1]-65]-1]+mod)%mod;
    		    dp[i]=(dp[i-1]+x)%mod;
    		    last[s[i-1]-65]=i;
    		}
    		printf("%lld\n",dp[n]);
    		
    	}
    	
        return 0;
    }
