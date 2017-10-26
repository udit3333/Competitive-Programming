#include <iostream>
#include <string>
using namespace std;
#define ll long long  int
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define si(x) scanf("%d",&x)
#define sc(x) scanf(" %c",&x)
#define maxn 1000005
ll arr[4][4][maxn],cnt[4][maxn];
string s;
void go()
{
    int n=s.length();
    for(int i=n-1;i>=0;i--)
    {
        cnt[0][i]=cnt[0][i+1];cnt[1][i]=cnt[1][i+1];cnt[2][i]=cnt[2][i+1];cnt[3][i]=cnt[3][i+1];
        if(s[i]=='c')cnt[0][i]++;
        if(s[i]=='e')cnt[1][i]++;
        if(s[i]=='f')cnt[2][i]++;
        if(s[i]=='h')cnt[3][i]++;
    }
    for(int i=n-1;i>=0;i--)
    {
        rep(j,4)rep(k,4)arr[j][k][i]=arr[j][k][i+1];
        if(s[i]=='c')
        {
            rep(j,4)arr[0][j][i]+=cnt[j][i];
        }
        if(s[i]=='e')
        {
            rep(j,4)arr[1][j][i]+=cnt[j][i];
        }
        if(s[i]=='f')
        {
            rep(j,4)arr[2][j][i]+=cnt[j][i];
        }
        if(s[i]=='h')
        {
            rep(j,4)arr[3][j][i]+=cnt[j][i];
        }
    }
}
ll query(char a,char b, int l,int r)
{
    int x,y;
    if(a=='c')x=0;
    if(a=='e')x=1;
    if(a=='f')x=2;
    if(a=='h')x=3;
    if(b=='c')y=0;
    if(b=='e')y=1;
    if(b=='f')y=2;
    if(b=='h')y=3;
    return (arr[x][y][l]-arr[x][y][r+1]-((cnt[x][l]-cnt[x][r+1])*cnt[y][r+1]));
}

int main(){
    cin>>s;
    go();
    int q;si(q);
    while(q--)
    {
        char a,b;int l,r;
        sc(a);sc(b);si(l);si(r);
        printf("%lld\n",query(a,b,l-1,r-1));
    }
    return 0;
}






