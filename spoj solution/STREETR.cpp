//STREETR - Street Trees
//Gcd
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define si(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define ll long long  int
#define pi pair<int,int>
#define pii pair<int,pi>
#define f first
#define mp make_pair
#define mod 10000007
#define s second
#define pb push_back
//std::ios::sync_with_stdio(false);
int arr[100005],temp[100005];
int gcd(int a,int b)
{
	if(a==0)return b;
	return gcd(b%a,a);
}
int main()
{
	int n,res=0,t;si(n);
	rep(i,n)si(arr[i]);
	sort(arr,arr+n);
	for(int i=1;i<n;i++)temp[i]=arr[i]-arr[i-1];
	t=temp[1];
	for(int i=1;i<n;i++)t=gcd(t,temp[i]);
	for(int i=1;i<n;i++)res+=temp[i]/t-1;
	printf("%d\n",res);
    return 0;
}
