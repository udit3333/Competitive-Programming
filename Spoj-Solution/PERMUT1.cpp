//PERMUT1 - Permutations
//2D dynamic programming
#include <iostream>
#include <algorithm>
#include <cstring>
#include <climits>
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
int dp[14][100];

int main()
{
rep1(i,12)
{
    rep(j,99)
    {
        if(j==0)
        {
            dp[i][j]=1;
            continue;
        }
        if(i>1)
        {   
            rep(k,i)
            {
                if(j-k<0)break;
                dp[i][j]+=dp[i-1][j-k];
            }
        }
        
    }
}
int t;
si(t);
while(t--)
{
    int n,k;
    si(n),si(k);
    printf("%d\n",dp[n][k]);
}
return 0;
}

