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
int n,num1=0,num2=0,num3=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
string s;
cin>>s;
if(s[0]=='3')num1++;
else
{
if(s[2]=='2')num2++;
else num3++;
}
}
int res=1;
res+=num1;
num3=num3-num1;
res+=num2/2;
if(num2%2==1){
if(num3>=2)
num3=num3-(num2%2)*2;
else 
{res++;
num3=num3-(num2%2)*2;}}
if(num3>0)
{
res+=num3/4;
if(num3%4!=0)res++;
}
cout<<res<<endl;

return 0;	
}


