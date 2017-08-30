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
{int n;
//scanf("%d",&total);
scanf("%d",&n);
int start=1,total=0,res;
while(1)
{
total=(start*(start+1))/2;
if(total>=n)
break;
start++;
}
int num=total-n;
num=start-num;
int a,b;
if(start%2==0)
{
a=num;
b=(start+1)-num;
}
else
{
a=(start+1)-num;
b=num;
}
//TERM 3 IS 2/1
cout<<"TERM "<<n<<" IS "<<a<<"/"<<b<<endl;
	
}
return 0;
}

