#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr1[10001];
int arr2[9999];
int main()
{arr1[0]=0;
for(int i=1;i<10001;i++)
{
if(i%2==1)
arr1[i]=arr1[i-1]+1;
else
arr1[i]=arr1[i-1]+3;
	
}
arr2[0]=2;
for(int i=1;i<9999;i++)
{
if((i+2)%2==1)
arr2[i]=arr2[i-1]+1;
else
arr2[i]=arr2[i-1]+3;
	
}
int t;
scanf("%d",&t);
while(t--)
{
int x,y;
scanf("%d",&x);
scanf("%d",&y);
if(x==y)
{
cout<<arr1[x];	
}
else if((x-y)==2)
{
cout<<arr2[x-2];	
}
else
{
cout<<"No Number";	
}
cout<<endl;
}
return 0;	
}
