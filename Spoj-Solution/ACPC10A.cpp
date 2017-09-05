#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
while(1)
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if((a==0)&&(b==0)&&(c==0))break;
int x1,x2;
x1=b-a;
x2=c-b;
if(x1==x2)
{
x2=c+x1;	
cout<<"AP"<<" "<<x2<<endl;
continue;
}
x1=b/a;
x2=c/b;
if(x1==x2)
{
x2=c*x1;	
cout<<"GP"<<" "<<x2<<endl;
continue;
}
}
return 0;	
}
