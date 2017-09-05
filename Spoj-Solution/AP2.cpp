#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long  int
#define pi pair<int,int>
#define pii pair<pi,int>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
ll f,l,s;
scanf("%lld",&f);
scanf("%lld",&l);
scanf("%lld",&s);
ll n=(2*s)/(l+f);
ll d=(l-f)/(n-5);
ll a=f-(2*d);
cout<<n<<endl;
ll term=a;
for(ll i=0;i<n;i++)
{
cout<<term<<" ";
term+=d;
}
cout<<endl;
}
return 0;
}

