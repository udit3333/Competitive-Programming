#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int modulo(ll a,ll b)
{
ll x=1,y=a;
while(b>0)
{
if(b%2==1)
{
x=(x*y)%10;	
}
y=(y*y)%10;
b=b/2;
}
return x%10;
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
ll a,b;
scanf("%lld",&a);
scanf("%lld",&b);
int res=modulo(a,b);
cout<<res<<endl;
	
}
return 0;	
}
