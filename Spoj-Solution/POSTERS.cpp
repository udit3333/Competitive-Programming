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
#define maxn 80005
#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
pi arr[maxn];
int main(){
    int t;si(t);
    while(t--)
    {
        int n,res=0;si(n);
        map<int,int> m;
        rep1(i,n)
        {
            int x,y;si(x);si(y);
            arr[i].f=x;arr[i].s=y;m[x];m[y];
        }
        int z=1;
        for(auto it=m.begin();it!=m.end();it++)
        {
            it->s=z;z++;
        }
        z--;
        map<int,bool> m1;
        rep1(i,z)m1[i]=1;
        for(int i=n;i>0;i--)
        {
            int x=m[arr[i].f],y=m[arr[i].s];
            auto it=m1.lower_bound(x);
            if(it==m1.end()||((it->f)>y))continue;
            res++;
            auto it1=m1.upper_bound(y);
            m1.erase(it,it1);
        }
        printf("%d\n",res);
    }
    return 0;
}


