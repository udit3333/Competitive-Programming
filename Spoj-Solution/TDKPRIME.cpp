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
#define mod 1000000007
#define s second
#define pb push_back

#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>

#define maxn 86028122
int prime[maxn>>6];

#define A(x) (prime[x>>6]&(1<<((x>>1)&31)))
#define B(x) (prime[x>>6]|=(1<<((x>>1)&31)))


int main(){
    vector<int> p;
   register int i,j,k;
   for(i=3;i<=sqrt(maxn);i+=2)
   {
      if(!A(i))
      {
         for(j=i*i,k=i<<1;j<maxn;j+=k)B(j);
      }   
   }   
    p.pb(2);
    for(i=3;i<maxn;i+=2)
    {
        if(!A(i))
        {
            p.pb(i);
        }
    }


    int q;si(q);
    while(q--)
    {
        int x;si(x);
        printf("%d\n",p[x-1]);
    }
    
    return 0;
}


