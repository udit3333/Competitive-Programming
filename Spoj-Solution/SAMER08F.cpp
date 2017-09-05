#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
while(1)
{
int n;
scanf("%d",&n);
if(n==0)break;
int res=((n*(n+1))*((2*n)+1))/6;
cout<<res<<endl;
}
return 0;	
}
