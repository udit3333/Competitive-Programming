        //ROCK - Sweet and Sour Rock
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
        int dp[205];
        int main()
        {
        	int t;si(t);
        	while(t--)
        	{
        		int n;si(n);
        		string s;cin>>s;
        		dp[n]=0;
        		for(int i=n-1;i>=0;i--)
        		{
        			int a=0,b=0,temp=0;
        			for(int j=i;j<n;j++)
        			{
        				if(s[j]=='1')a++;
        				else b++;
        				if(a>b)
        				{
        					temp=max(temp,dp[j+1]+a+b);
        				}
        				else temp=max(temp,dp[j+1]);
        			}
        			dp[i]=temp;
        		}
        		printf("%d\n",dp[0]);
     
        	}
            return 0;
        }
