#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll n;
scanf("%lld",&n);
if(n%10==0)
cout<<"2"<<endl;
else
{
cout<<"1"<<endl;
int x=n%10;
cout<<x<<endl;
}
return 0;	
}
