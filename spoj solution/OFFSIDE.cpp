#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
while(1)
{
int a,d;
scanf("%d",&a);
scanf("%d",&d);
if(a==0)break;
int mina=INT_MAX,min1=INT_MAX,min2=INT_MAX;
for(int i=0;i<a;i++)
{
int x;
scanf("%d",&x);
mina=min(mina,x);
}

for(int i=0;i<d;i++)
{
int x;
scanf("%d",&x);
if(x<=min1)
{
min2=min1;
min1=x;
}
else if(x<=min2)
{
min2=x;	
}
}	
if(mina<min2)
cout<<"Y"<<endl;
else
{
cout<<"N"<<endl;	
}
}
return 0;	
}


