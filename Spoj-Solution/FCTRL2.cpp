#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[160];
int main()
{
memset(arr,0,sizeof(arr));
arr[0]=1;
int t;
scanf("%d",&t);
while(t--)
{
memset(arr,0,sizeof(arr));
arr[0]=1;
int n;
scanf("%d",&n);
for(int i=2;i<=n;i++)
{
int carry=0;	
for(int j=0;j<=159;j++)
{
int x=arr[j]*i+carry;
arr[j]=x%10;
x=x/10;
carry=x;
}
}
int end=0;
for(int j=159;j>=0;j--)
{
if(arr[j]==0)
{
end=j;	
}
else break;
}
for(int i=end-1;i>=0;i--)
{
cout<<arr[i];	
}
cout<<endl;




}
return 0;	
}
