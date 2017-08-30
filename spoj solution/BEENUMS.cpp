#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
while(1)
{
ll n;
scanf("%lld",&n);
if(n==-1)break;
if(n==1)
{cout<<"Y"<<endl;
continue;}
n--;
if(n%3!=0)
{
cout<<"N"<<endl;
continue;
}
n=n/3;
n=n*4+1;
double t1=(double)n;
double t=sqrt(t1);
if(t==ceil(t))
{
t++;
t=t/2;
if(t==ceil(t))
{cout<<"Y"<<endl;
continue;}
else
{cout<<"N"<<endl;
continue;
	}
	
}
else
{
cout<<"N"<<endl;
continue;	
}
}
return 0;	
}
