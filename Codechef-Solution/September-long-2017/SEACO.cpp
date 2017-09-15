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
    #include <cmath>
    #include <unordered_map>
    #include <sstream>
    #include <utility>
    #include <iterator>
    using namespace std;
    #define ll long long  int
    #define rep(i,n) for(ll i=0;i<n;i++)
    #define rep1(i,n) for(ll i=1;i<=n;i++)
    #define rep2(i,a,b,c) for(ll i=a;i<=b;i+=c)
    #define si(x) scanf("%d",&x)
    #define sd(x) scanf("%lf",&x)
    #define sf(x) scanf("%f",&x)
    #define sll(x) scanf("%lld",&x)
    #define pi pair<int,int>
    #define pii pair<pi,int>
    #define f first
    #define mp make_pair
    #define mod 1000000007
    #define s second
    #define pb push_back
    #define maxn 100005
    #define INF 1000000005
    #define NIL 0
    #define source 100001
    #define sink 100002 
    #define one 1ll
    #define block 317
    //std::ios::sync_with_stdio(false);
    // ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll bit1[maxn],bit2[maxn];
    int a[maxn],n,m;
    pi b[maxn];
    void update(int x,ll val,int mode)
    {
        while(x<maxn)
        {
            if(mode)bit2[x]=(bit2[x]+val)%mod;
            else bit1[x]=(bit1[x]+val)%mod;
            x+=(x&-x);
        }
    }
    ll query(int x,int mode)
    {
        ll res=0;
        while(x>0)
        {
            if(mode)res=(res+bit2[x])%mod;
            else res=(res+bit1[x])%mod;
            x-=(x&-x);
        }
        return res%mod;
    }
    int main()
    {
        int t;si(t);
         while(t--)
        {
            memset(bit1,0,sizeof(bit1));
            memset(bit2,0,sizeof(bit2));
            int k=0;si(n);si(m);
            rep1(i,m)
            {
                int x,y,z;si(x);si(y);si(z);
                a[i]=x;b[i]={y,z};
            }
            for(int i=m;i>0;i--)
            {
                if(a[i]==2)
                    {
                        ll x=(query(i,0)+1)%mod;
                        update(b[i].f,x,0);
                        update(b[i].s+1,mod-x,0);
                    }
            }
            rep1(i,m)
            {
                if(a[i]==1)
                {
                    ll x=(query(i,0)+1)%mod;
                    update(b[i].f,x,1);
                    update(b[i].s+1,mod-x,1);
                }
            }
            rep1(i,n)
            {
                printf("%lld ",query(i,1));
            }
            printf("\n");
        }
       return 0;
    } 
