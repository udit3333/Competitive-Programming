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
double arr[277];
int main()
{
	double sum=0;
	int n=276;
	arr[0]=0;
for(int i=1;i<=n;i++)
{
sum+=1/(double)(i+1);
arr[i]=sum;
}
while(1)
{
int res;
double d;
cin>>d;
if(d==0)
break;
for(int i=0;i<277;i++)
{
if(arr[i]>=d)
{res=i;
	break;
}
}
cout<<res<<" "<<"card(s)"<<endl;
}
return 0;
}

