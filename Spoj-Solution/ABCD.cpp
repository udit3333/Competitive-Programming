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
#define maxn 1000005
#define INF 10000000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<vector<double> >
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int n;cin>>n;
    string s;cin>>s;
    string res;
    rep(i,n)
    {
        int x=2*i,y=2*i+1;
        if((s[x]=='A'&&s[y]=='B')||(s[x]=='B'&&s[y]=='A'))
        {
            if(i)
            {
                if(res[x-1]=='C')
                {
                    res.pb('D');res.pb('C');
                    continue;
                }
            }
            res.pb('C');res.pb('D');
            continue;
        }
        
        if((s[x]=='A'&&s[y]=='C')||(s[x]=='C'&&s[y]=='A'))
        {
            if(i)
            {
                if(res[x-1]=='B')
                {
                    res.pb('D');res.pb('B');
                    continue;
                }
            }
            res.pb('B');res.pb('D');
            continue;
        }
        if((s[x]=='A'&&s[y]=='D')||(s[x]=='D'&&s[y]=='A'))
        {
            if(i)
            {
                if(res[x-1]=='B')
                {
                    res.pb('C');res.pb('B');
                    continue;
                }
            }
            res.pb('B');res.pb('C');
            continue;
        }
        if((s[x]=='B'&&s[y]=='C')||(s[x]=='C'&&s[y]=='B'))
        {
            if(i)
            {
                if(res[x-1]=='A')
                {
                    res.pb('D');res.pb('A');
                    continue;
                }
            }
            res.pb('A');res.pb('D');
            continue;
        }
        if((s[x]=='B'&&s[y]=='D')||(s[x]=='D'&&s[y]=='B'))
        {
            if(i)
            {
                if(res[x-1]=='A')
                {
                    res.pb('C');res.pb('A');
                    continue;
                }
            }
            res.pb('A');res.pb('C');
            continue;
        }
        if((s[x]=='C'&&s[y]=='D')||(s[x]=='D'&&s[y]=='C'))
        {
            if(i)
            {
                if(res[x-1]=='B')
                {
                    res.pb('A');res.pb('B');
                    continue;
                }
            }
            res.pb('B');res.pb('A');
            continue;
        }
    }
    cout<<res<<endl;
    return 0;
}