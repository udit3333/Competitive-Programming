#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[105];
int main()
{
string s;
while(cin>>s)
{

memset(a,0,sizeof(a));	
if((s.length()==1)&&(s[0]=='1'))
{
cout<<"1"<<endl;
continue;
}
int count=0;
for(int i=s.length()-1;i>=0;i--)
{
a[count]=s[i]-'0';
count++;
}
int carry=0;
for(int i=0;i<105;i++)
{
int x=2*a[i]+carry;
a[i]=x%10;
carry=x/10;
}
//carry=0;
if(a[0]>=2)
{a[0]=a[0]-2;}
else
{
a[0]=8+a[0];
for(int i=1;i<125;i++)
{
if(a[i]==0)
a[i]=9;
else
{
a[i]--;
break;
}
}
}
int flag=0;
for(int i=124;i>=0;i--)
{
if(a[i])
flag=1;
if(flag)
cout<<a[i];	
}
cout<<endl;	
}
return 0;	
}


