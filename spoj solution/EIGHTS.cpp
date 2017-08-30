#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 


int main()
{
ll t;
scanf("%lld",&t);
while(t--)
{
	
ll n,res,temp=0;
scanf("%lld",&n);
if(n%4==1)
{
temp=n/4;
res=temp*1000+192;
}
else if(n%4==2)
{
temp=n/4;
res=temp*1000+442;
}
else if(n%4==3)
{
temp=n/4;
res=temp*1000+692;
}
else
{
temp=n/4;
temp--;
res=temp*1000+942;
}		
cout<<res<<endl;	
	
}
return 0;	
}















