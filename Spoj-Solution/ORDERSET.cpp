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
#define maxn 105
#define INF 1000008
#define NIL 0
#define one 1ll
#define block 317
#define vecc vector<int>
//std::ios::sync_with_stdio(false);
// ios_base::sync_with_stdio(false); cin.tie(NULL);
int main(){
    map<int,bool> m;
    m[1]=1;m[2]=1;m[3]=1;
    auto it1=m.begin();
    auto it2=it1++;
    cout<<it1->f<<endl;
    //cout<<it2-it1<<endl;
    
    return 0;
}

