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
    #define pi pair<ll,ll>
    #define pii pair<pi,ll>
    #define f first
    #define mp make_pair
    #define mod 1000000007
    #define s second
    #define pb push_back
    #define maxn 100005
    #define INF 10000000000005
    #define NIL 0
    #define source 100001
    #define sink 100002 
    #define one 1ll
    #define block 317
    //std::ios::sync_with_stdio(false);
    // ios_base::sync_with_stdio(false); cin.tie(NULL);
    int arr[10];
    int main()
    {
        int t;si(t);
        while(t--)
        {
            memset(arr,0,sizeof(arr));
            string s,res="";cin>>s;
            rep(i,s.length())arr[s[i]-'0']++;
            for(int i=65;i<=90;i++)
            {
                int y=i%10,x=i/10;
                if(x==y){if(arr[x]>=2)res.pb(i);}
                else if(arr[x]>=1&&arr[y]>=1)res.pb(i);
            }
            cout<<res<<endl;
        }
       return 0;
    }  
