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
ll recur(ll n,ll k)
{
if(k==0)return 1;
ll ans=1;
if(k>n-k) k=n-k;
for(ll i=0;i<k;i++)
ans=(ans*(n-i))/(i+1);
return ans;
}


int main()
{
int t;
scanf("%d",&t);
while(t--)
{
ll n,k;
scanf("%lld",&n);
scanf("%lld",&k);
ll res=recur(n-1,k-1);
cout<<res<<endl;

}
return 0;	
}


