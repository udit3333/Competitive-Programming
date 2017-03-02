    //ALIEN - Aliens at the train
    //sliding window
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
    int arr[100005];
    int main()
    {
    	int t;si(t);
    	while(t--)
    	{
    		int a,b,start=0,end=0,total=0,res1=0,res2=0;si(a);si(b);
    		rep(i,a)si(arr[i]);
    		while(end<a)
    		{
    			if(total+arr[end]<=b)
    			{
    				total+=arr[end];
    				end++;
    			}
    			else
    			{
    				if(end-start>=res1)
    				{
    					if(end-start==res1)
    					{
    						res2=min(res2,total);
    					}
    					else
    					{
    					res1=end-start;
    					res2=total;
    					}
    				}
    				if(start==end)
    				{
    					start++;end++;
    				}
    				else 
    				{
    					total-=arr[start];
    					start++;
    				}
    			}
    		}
    		if(a-start>=res1)
    		{
    			if(a-start==res1)res2=min(res2,total);
    			else
    			{
    				res1=a-start;
    				res2=total;
    			}
    		}
    		printf("%d %d\n",res2,res1);
    		
    	}
        return 0;
    }
