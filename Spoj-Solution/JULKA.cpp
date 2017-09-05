#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int a1[102],b1[102],x1[102];
int y[102];
int main()
{
int t1=10;
while(t1--)
{
int res[102];	
memset(a1,0,sizeof(a1));
memset(b1,0,sizeof(b1));
memset(x1,0,sizeof(x1));
memset(y,0,sizeof(y));
string a,b;
cin>>a;
cin>>b;
int z=0;
for(int i=(a.length()-1);i>=0;i--)
{
a1[z]=a[i]-'0';
z++;
}

z=0;
for(int i=(b.length()-1);i>=0;i--)
{
b1[z]=b[i]-'0';
z++;
}
int carry=0;
for(int i=0;i<102;i++)
{
int num=(a1[i]+b1[i])+carry;
b1[i]=num%10;
carry=num/10;
res[i]=-1;
}

int flag=1,k=101;
carry=0;
for(int i=101;i>=0;i--)
{
int num=0;	
if(flag)
{
if(b1[i]==0)
continue;
else
{
flag=0;	
}
}
//cout<<b1[i];
num=(10*carry)+b1[i];
res[k]=num/2;
carry=num%2;
k--;
}
//cout<<res[101]<<res[100]<<k;
k++;
int t=0;
for(int i=k;i<=101;i++)
{
x1[t]=res[i];
t++;
}

int borrow=0;
for(int i=0;i<102;i++)
{
if(a1[i]>x1[i])
{
y[i]=(a1[i]-borrow)-x1[i];
borrow=0;
}
else if(a1[i]<x1[i])
{
a1[i]=10+a1[i];
a1[i]=a1[i]-borrow;
y[i]=a1[i]-x1[i];
borrow=1;
}
else
{
if(borrow==0)
{
y[i]=0;	
}
else
{
a1[i]=10+a1[i];
a1[i]=a1[i]-borrow;
y[i]=a1[i]-x1[i];
borrow=1;
}
	
}
}

flag=1;
for(int i=101;i>=0;i--)
{
if(flag)
{
if(x1[i]==0)continue;
else
flag=0;
}
cout<<x1[i];
}
cout<<endl;
flag=1;
for(int i=101;i>=0;i--)
{
if(flag)
{
if(y[i]==0)continue;
else
flag=0;
}
cout<<y[i];
}
cout<<endl;

}
return 0;	
}
