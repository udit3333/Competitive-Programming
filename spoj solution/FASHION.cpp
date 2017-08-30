#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int m[11],w[11];
int a1[1001],a2[1001];
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
memset(m,0,sizeof(m));
memset(w,0,sizeof(w));
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
int x;
scanf("%d",&x);
m[x]++;	
}
for(int i=0;i<n;i++)
{
int x;
scanf("%d",&x);
w[x]++;	
}
int k=0;
for(int i=0;i<=10;i++)
{
if(m[i]==0)continue;
while(m[i]--)
{
a1[k]=i;
k++;
}
}
k=0;
for(int i=0;i<=10;i++)
{
if(w[i]==0)continue;
while(w[i]--)
{
a2[k]=i;
k++;
}
}
int res=0;
for(int i=0;i<n;i++)
{
res+=(a1[i]*a2[i]);	
}
cout<<res<<endl;	
}
return 0;	
}
