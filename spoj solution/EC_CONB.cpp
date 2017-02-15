//EC_CONB - Even Numbers
#include <iostream>
#include <algorithm>
#include <cstring>
#include <climits>
#include <vector>
#include <queue>
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
int arr[30];
int main()
{
    int t;si(t);
    while(t--)
    {
        memset(arr,0,sizeof(arr));
        int n;si(n);
        if(n%2==1)
        {
            printf("%d\n",n);
            continue;
        }
        int i=0,res=0,j=0;
        while(n!=0)
        {
            arr[i]=n%2;i++;
            n=n/2;
        }
        i--;
        while(j<i)
        {
            int x=arr[j];
            arr[j]=arr[i];
            arr[i]=x;
            i--;j++;
        }
        int t=1;
        rep(k,28)
        {
            res+=arr[k]*t;
            t*=2;
        }
        printf("%d\n",res);
    }
    
    return 0;
}

