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
    #define pii pair<pi,ll
    #define f first
    #define mp make_pair
    #define mod 1000000007
    #define s second
    #define pb push_back
    #define maxn 505
    #define INF 10000000008
    #define NIL 0
    #define one 1ll
    #define block 317
    #define vecc vector<vector<double> >
    //std::ios::sync_with_stdio(false);
    // ios_base::sync_with_stdio(false); cin.tie(NULL);
    int main()
    {
            double t;sd(t);
            double a1,a2,a3;sd(a1);sd(a2);sd(a3);
            double x1,x2,x3;sd(x1);sd(x2);sd(x3);
            double b1,b2,b3;sd(b1);sd(b2);sd(b3);
            double y1,y2,y3;sd(y1);sd(y2);sd(y3);
            double res=((a1-b1)*(a1-b1))+((a2-b2)*(a2-b2))+((a3-b3)*(a3-b3));
            res=sqrt(res);
            printf("%.8f\n",res);
        
        return 0;
    }