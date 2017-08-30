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
int ng,nm;
scanf("%d",&ng);
scanf("%d",&nm);
int g[ng],m[nm];
for(int i=0;i<ng;i++)
{
scanf("%d",&g[i]);	
}
for(int i=0;i<nm;i++)
{
scanf("%d",&m[i]);	
}
sort(g,g+ng);
sort(m,m+nm);
int s1=0,s2=0;
int flag=0;
while(1)
{
if(g[s1]<m[s2])
{
s1++;
if(s1==ng)
{
flag=1;
break;
}
}
else
{
s2++;
if(s2==nm)
{
flag=0;
break;
}
}
}

if(flag)
{
cout<<"MechaGodzilla"<<endl;	
}
else
{
cout<<"Godzilla"<<endl;	
}

}
return 0;
}

