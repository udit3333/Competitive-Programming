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
ll n;
scanf("%lld",&n);
ll res=(n*((n+2)*(2*n+1)))/8;
cout<<res<<endl;


}
return 0;
}

