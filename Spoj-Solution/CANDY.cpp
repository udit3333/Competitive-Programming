#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[10005];
int main()
{
while(1)
{
int n;
scanf("%d",&n);
if(n==-1)break;
int sum=0;
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
sum+=arr[i];
}
if(sum%n!=0)
{
cout<<"-1"<<endl;
continue;
}
sum=sum/n;
int res=0;
for(int i=0;i<n;i++)
{
if(arr[i]>sum)
res+=(arr[i]-sum);
}
cout<<res<<endl;
}
return 0;	
}
