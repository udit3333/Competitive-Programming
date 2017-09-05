//TSHOW1 - Amusing numbers
#include <iostream>
#include <string>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define si(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define ll long long  int
#define pi pair<int,int>
#define pii pair<int,pi>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
int main()
{
    std::ios::sync_with_stdio(false);
    int t;cin>>t;
    while(t--)
    {
        ll k;cin>>k;
        string res=" ";
        while(k>0)
        {
            if(k%2==0)
            {
                res='6'+res;
                k=k/2;
                k--;
            }
            else
            {
                res='5'+res;
                k=k/2;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}

