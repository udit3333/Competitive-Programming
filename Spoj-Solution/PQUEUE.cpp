#include <vector>
#include <stack>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <string>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <climits> 
#include <cmath>
#include <unordered_map>
#include <sstream>
#include <utility>
#include <iterator>
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
#define maxn 1005
#define INF 10000000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<vector<double> >
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
int arr[10];
int main()
{
    int t;si(t);
    while(t--)
    {
        memset(arr,0,sizeof(arr));
        deque<pi> d;
        int n,m,maxx=0;si(n);si(m);
        rep(i,n)
        {
            int x;si(x);maxx=max(maxx,x);
            d.push_back({x,i});
            arr[x]++;
        }
        int res=0;
        while(1)
        {
            auto x=d.front();d.pop_front();
            int x1=x.f,x2=x.s;
            if(x1==maxx)
            {
                res++;arr[maxx]--;
                if(x2==m)break;
                if(arr[maxx]==0)
                {
                    while(arr[maxx]==0)
                    {
                        maxx--;
                    }
                }
            }
            else
            {
                d.push_back({x1,x2});
            }
        }
        printf("%d\n", res);
    }
    return 0;
}