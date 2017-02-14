//CRSCNTRY - Cross-country
//Longest Common Subsequence Problem.
//solution using dynamic programming.
#include <iostream>
#include <algorithm>
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
#define mod 1000000007
#define s second
#define pb push_back
//std::ios::sync_with_stdio(false);
int dp[2003][2003],arr1[2003],arr2[2003],n,n1;
int main()
{
    int t;si(t);
    while(t--)
    {
        int index=1,res=0;
        while(1)
        {
            int x;
            si(x);
            if(x==0)break;
            arr1[index]=x;
            index++;
        }
        n=index-1;
        while(1)
        {
            index=1;
            while(1)
            {
                int x;si(x);
                if(x==0)break;
                arr2[index]=x;
                index++;
            }
            if(index==1)break;
            n1=index-1;
            int temp=0;
            rep1(i,n)
            {
                rep1(j,n1)
                {
                    int x=0,y=0,z=0;
                    if(i-1>0)x=dp[i-1][j];
                    if(j-1>0)y=dp[i][j-1];
                    if(i-1>0&&j-1>0)z=dp[i-1][j-1];
                    if(arr1[i]==arr2[j])dp[i][j]=1+z;
                    else dp[i][j]=max(x,y);
                }
            }
            res=max(res,dp[n][n1]);
        }
        printf("%d\n",res);
    }
    return 0;
}

