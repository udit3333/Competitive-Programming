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
int arr[1005];
int main()
{
int t;
int c=1;
scanf("%d",&t);
while(t--)
{
	
int total,n;
scanf("%d",&total);
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);	
}
sort(arr,arr+n);
int res=-1,sum=0;
for(int i=n-1;i>=0;i--)
{
sum+=arr[i];
if(sum>=total)
{
res=n-i;
break;
}
}
if(res==-1)
{
cout<<"Scenario #"<<c<<":"<<endl;
cout<<"impossible"<<endl;
cout<<endl;
}
else
{
cout<<"Scenario #"<<c<<":"<<endl;
cout<<res<<endl;
cout<<endl;	
}
c++;	
}
return 0;
}

