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
int arr[100005];
int brr[100005];
int main()
{
while(1)
{
int t;
scanf("%d",&t);
if(t==0)break;
for(int i=1;i<=t;i++)
{
scanf("%d",&arr[i]);
brr[arr[i]]=i;
}
int flag=0;
for(int i=1;i<=t;i++)
{
//cout<<brr[i];	
if(arr[i]!=brr[i])
{
flag=1;
break;
}

}
if(flag==1)
cout<<"not ambiguous"<<endl;
else
cout<<"ambiguous"<<endl;
}

return 0;
}

