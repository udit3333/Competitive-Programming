//HACKRNDM - Hacking the random number generator
#include <iostream>
#include <unordered_map>
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
#define mod 1000000007
#define s second
#define pb push_back
int arr[100005];
int main()
{
    unordered_map<int,bool> m;
    int n,k,res=0;si(n);si(k);
    rep(i,n)
    {
        si(arr[i]);
        m[arr[i]]++;
    }
    rep(i,n)
    {
      if(m[arr[i]+k])res++;  
    }
    printf("%d\n",res);
    return 0;
}

