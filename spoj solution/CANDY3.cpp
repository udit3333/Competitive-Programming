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
ll n,res=0;
scanf("%lld",&n);
ll temp=n;
while(temp--)
{
ll x;
scanf("%lld",&x);
x=x%n;
res=(res+x)%n;
}
res=res%n;	
if(res==0)cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
return 0;	
}















