#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char arr[101][21];
int main()
{
while(1)
{
int c;
scanf("%d",&c);
if(c==0)break;
string s;
cin>>s;
int x=s.length();
int r=x/c,k=0;
int start=0;
for(int i=0;i<r;i++)
{
if(start==0)
{
while(start<c)
{
arr[i][start]=s[k];
k++;
start++;
}
start--;
}
else	
{
	
while(start>=0)
{
arr[i][start]=s[k];
k++;
start--;
}
start++;
}
}
for(int i=0;i<c;i++)
{
for(int j=0;j<r;j++)
{
cout<<arr[j][i];
}
}
cout<<endl;
}
return 0;	
}
