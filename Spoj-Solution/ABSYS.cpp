#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long  int
#define pi pair<int,int>
#define pii pair<pi,int>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
string s1,s2,s3,s4,s5;
//cin>>s1;
cin>>s1;
cin>>s2;
cin>>s3;
cin>>s4;
cin>>s5;
int a,b,c;
//a=stoi(s5);
int flag=0;
for(int i=0;i<s1.length();i++)
{
if(s1[i]=='m')	
{
	flag=1;
	break;
}
}
for(int i=0;i<s3.length();i++)
{
if(s3[i]=='m')	
{
	flag=2;
	break;
}
}
for(int i=0;i<s5.length();i++)
{
if(s5[i]=='m')	
{
	flag=3;
	break;
}
}
if(flag==0)
{
cout<<s1<<" "<<"+"<<" "<<s3<<" "<<"="<<" "<<s5<<endl;	
}
else if(flag==1)
{
b=stoi(s3);
c=stoi(s5);
a=c-b;
cout<<a<<" "<<"+"<<" "<<s3<<" "<<"="<<" "<<s5<<endl;
}
else if(flag==2)
{
a=stoi(s1);
c=stoi(s5);
b=c-a;
cout<<s1<<" "<<"+"<<" "<<b<<" "<<"="<<" "<<s5<<endl;
}
else if(flag==3)
{
a=stoi(s1);
b=stoi(s3);
c=b+a;
cout<<s1<<" "<<"+"<<" "<<s3<<" "<<"="<<" "<<c<<endl;
}










	
}
return 0;
}

