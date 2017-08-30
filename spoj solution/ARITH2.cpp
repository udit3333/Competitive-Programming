#include <bits/stdc++.h>
//#include <stdlib.h>
using namespace std;
#define ll long long
int main()
{

	
ll t;
scanf("%lld",&t);
while(t--)
{
ll res=0;	
int flag=1;	
ll x;
string temp;
while(1)
{
string s;
cin>>s;
if(s=="=")break;
if(s=="+"||s=="-"||s=="*"||s=="/")
temp=s;
else
{
	
	
x=stoll(s);
if(flag)
{
res+=x;
flag=0;
}
else
{
if(temp=="+")res+=x;
else if(temp=="-")res-=x;
else if(temp=="/")res/=x;
else if(temp=="*")res*=x;
}

}

}
cout<<res<<endl;
}

return 0;	
}


