//ROOTCIPH - Decipher
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
int main()
{
    int t;si(t);
    while(t--)
    {
        ll a,b,c;sll(a);sll(b);sll(c);
        printf("%lld\n",a*a-2*b);
    }
    return 0;
}

