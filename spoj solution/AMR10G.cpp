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
int arr[20005];
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int k,n;
scanf("%d",&n);
scanf("%d",&k);
vector<int> vec;
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
if(k==1)
{
cout<<"0"<<endl;
continue;
}
int res=INT_MAX;
sort(arr,arr+n);
for(int i=k-1;i<n;i++)
res=min(res,arr[i]-arr[(i-k)+1]);
cout<<res<<endl;
}

return 0;	
}


