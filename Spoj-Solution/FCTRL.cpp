#include <iostream>
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
int t;
scanf("%d",&t);
while(t--)
{
ll n;
scanf("%lld",&n);
ll res=0,temp=5;
while(temp<=n)
{
res+=(n/temp);
temp=temp*5;
}
cout<<res<<endl;	
}	
	return 0;
}
