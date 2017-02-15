//BYECAKES - Bye Bye Cakes
#include <iostream>
#include <algorithm>
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
int arr[10];
int main()
{
    while(1)
    {
        int temp=0,res=0;
        rep(i,8)si(arr[i]);
        if(arr[0]==-1)break;
        rep(i,4)
        {
            int x=arr[i]/arr[i+4];
            if(arr[i]%arr[i+4]!=0)x++;
            temp=max(temp,x);
        }
        rep(i,4)printf("%d ",temp*arr[i+4]-arr[i]);
        printf("\n");
    }
    return 0;
}

