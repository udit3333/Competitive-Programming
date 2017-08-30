#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{

int n,res=1;
scanf("%d",&n);
//int last=1;
if(n==1)
cout<<"1"<<endl;
else
{
for(int i=2;i<=n;i++)
{
int count=1;
for(int j=2;j<=sqrt(i);j++)
{
if(i%j==0)
{
count++;	
}
}

res+=count;

	
}
cout<<res<<endl;
}
return 0;	
}
