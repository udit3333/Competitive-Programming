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
int main()
{
    int t;si(t);
    while(t--)
    {
        int n,m;si(n);si(m);
        int t=min(n,m);
        if(t%2==0)t=t-2;
        else t=t-1;
        n=n-t;m=m-t;
        if(m==1&&n>1)printf("D\n");
        else if(n==1&&m>=1)printf("R\n");
        else if(n>2&&m==2)printf("U\n");
        else if(n==2&&m>=2)printf("L\n");
        
    }
    return 0;
}

