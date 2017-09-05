//RPLC - Coke madness
#include <iostream>
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
int main()
{
    int t;si(t);
    rep1(i,t)
    {
        ll res=1,energy=1;
        int n;si(n);
        while(n--)
        {
            ll x;sll(x);
            energy+=x;
            if(energy<=0)
            {
                res+=abs(energy)+1;
                energy=1;
            }
        }
        printf("Scenario #%d: %lld\n",i,res);
    }
    
    return 0;
}

