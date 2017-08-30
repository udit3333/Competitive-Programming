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
int a[1000005];
int main()
{
memset(a,0,sizeof(a));	
for(int i=2;i<1000005;i++)
{if(a[i]==0){
for(int j=i;j<1000005;j+=i)	
{
if(a[j]==0)	
a[j]=i;
}
}
}
//cout<<a[11]<<a[49]<<a[100];
int t;
scanf("%d",&t);
while(t--)
{
int n;
scanf("%d",&n);
if(n==1)
{
cout<<"1"<<endl;
continue;
}
int res=n,x=1,y=1;
int num=n;
while(num!=1)
{
int temp=a[num];
res=res/temp;
res=res*(temp-1);
while(num%temp==0)
num=num/temp;
}

cout<<res<<endl;
}

return 0;	
}


