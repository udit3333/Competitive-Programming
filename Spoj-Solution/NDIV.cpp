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
#define maxn 31625
#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
int arr[maxn],prime[maxn];
int arr1[maxn][11];
int main(){
    for(int i=4;i<maxn;i+=2)prime[i]=1; //remove all even number
    for(int i=3;i<=sqrt(maxn);i+=2)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<maxn;j+=2*i)prime[j]=1;  // go only to odd multiples
        }
    }
    vecc v;
    int res=0;
    for(int i=2;i<maxn;i++)if(!prime[i])v.pb(i);
    int a,b,n;si(a);si(b);si(n);
    for(int i=a;i<=b;i++)
    {
        int x=i,y=1;
        rep(j,v.size())
        {
            if(x==1)break;
            int y1=0;
            if(x%v[j]==0)
            {
                while(x%v[j]==0){x/=v[j];y1++;}
            }
            y*=(y1+1);
        }
        if(x>1)y*=2;
        if(y==n)res++;
    }
    printf("%d\n",res);
    
    return 0;
}


