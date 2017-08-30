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
while(1)
{
int g,b,a1,a2;
scanf("%d",&g);
scanf("%d",&b);
if(g==-1)break;
a1=max(g,b);
a2=min(g,b);
if(a2==0)
{
cout<<a1<<endl;
continue;
}
if(g==b)
{
cout<<"1"<<endl;
continue;
}
a2++;
int res=(a1/a2);
if((a1%a2)!=0)res++;

cout<<res<<endl;
}
return 0;
}

