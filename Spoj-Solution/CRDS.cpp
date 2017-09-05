#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll mod=1000007;	
int t;
scanf("%d",&t);
while(t--)
{
ll n;
scanf("%lld",&n);
ll res;
res=(n*(3*n+1))/2;
res=res%mod;
cout<<res<<endl;
}
return 0;	
}
