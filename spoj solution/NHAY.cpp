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
ll n;
while(cin>>n)
{
string m,s;
cin>>m;
cin>>s;
if(n>s.length())
{
cout<<endl;
//cout<<endl;
continue;
}
ll a[n+1];
a[0]=0;
a[1]=0;
ll j=0;
for(ll i=2;i<=n;i++)
{
j=a[i-1];
while(1)
{
if(m[j]==m[i-1])
{
a[i]=j+1;
break;
}
if(j==0)
{a[i]=0;
break;
}
j=a[j];
}	
}
ll i=0;
j=0;
while(1)
{
if(j==s.length())break;
if(m[i]==s[j])
{
if(i==n-1)
{
cout<<j-i<<endl;	
i=a[i];
}
else{
i++;
j++;
}}
else if(i>0)i=a[i];
else j++;
}
cout<<endl;
}
return 0;	
}


