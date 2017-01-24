//AGGRCOW - Aggressive cows
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int arr[100005];
int n,c;
int recur(int x)
{
int temp=1,curr=arr[0];
for(int i=1;i<n;i++)
{
if((arr[i]-curr)>=x)
{
temp++;
if(temp==c)return 1;
curr=arr[i];
}
}
return 0;
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int res;	
scanf("%d",&n);
scanf("%d",&c);
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
sort(arr,arr+n);
int start=0;
int end=(arr[n-1]-arr[0])+1;
while(end-start>1)
{	
int mid=(end+start)/2;
if(recur(mid))
{
start=mid;
}
else
{
end=mid;	
}
}
cout<<start<<endl;
}
return 0;	
}
