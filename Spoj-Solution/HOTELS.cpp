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
int a[300005];
int main()
{
int n,m;
scanf("%d",&n);
scanf("%d",&m);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
int start=0,end=0,res=INT_MIN,curr=0;
while(1)
{
if(end>=n)break;	
if(curr+a[end]<=m)
{curr+=a[end];
res=max(res,curr);
	end++;
}
else
{
res=max(res,curr);
curr-=a[start];
start++;
}}
cout<<res<<endl;
return 0;
}


