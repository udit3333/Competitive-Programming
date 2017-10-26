#include <iostream>
#include <algorithm>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include <cmath>
#include <unordered_map>
#include <sstream>
#include <utility>
#include <iterator>
#include <vector>
#include <stack>
#include <cstdio>
#include <climits> 
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <string>
using namespace std;
#define ll long long  int
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep2(i,a,b,c) for(int i=a;i<=b;i+=c)
#define si(x) scanf("%d",&x)
#define sd(x) scanf("%lf",&x)
#define sf(x) scanf("%f",&x)
#define sll(x) scanf("%lld",&x)
#define pi pair<int,int>
#define pii pair<pi,ll>
#define f first
#define mp make_pair
#define mod 5000000
#define s second
#define pb push_back
#define maxn 1000005
#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
int arr[maxn],prime[maxn];
int arr1[maxn][11];
int main(){
    for(int i=4;i<maxn;i+=2)prime[i]=2; //remove all even number
    for(int i=3;i<=sqrt(maxn);i+=2)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<maxn;j+=2*i)prime[j]=i;  // go only to odd multiples
        }
    }
    for(int i=2;i<maxn;i++)if(!prime[i])prime[i]=i;
    for(int i=2;i<maxn;i++)
    {
        int x=i,y=0;
        while(x>1)
        {
            y++;
            int x1=prime[x];
            while(x%x1==0)x/=x1;
        }
        arr[i]=y;
    }
    rep1(i,maxn-1)
    {
        rep(j,11)arr1[i][j]+=arr1[i-1][j];
        if(arr[i]>10)continue;
        arr1[i][arr[i]]++;
    }
    int t;si(t);
    while(t--)
    {
        int res=0;
        int a,b,n;si(a);si(b);si(n);
        res=arr1[b][n]-arr1[a-1][n];
        printf("%d\n",res);
    }
    return 0;
}


