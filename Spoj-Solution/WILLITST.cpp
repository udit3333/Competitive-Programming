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
int flag=1;
scanf("%lld",&n);
double temp=log2(n);
if(temp==ceil(temp))
cout<<"TAK"<<endl;
else
cout<<"NIE"<<endl;
return 0;
}

