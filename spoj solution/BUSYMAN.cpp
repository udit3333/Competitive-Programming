//BUSYMAN - I AM VERY BUSY
//sort the activities according to their ending time.
#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define ll long long  int
#define pi pair<int,int>
#define pii pair<pi,int>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
pi arr[100005];
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
    {
    int n,res=0,last=-1;
    scanf("%d",&n);
    rep(i,n)
      {
      scanf("%d",&arr[i].s); 
      scanf("%d",&arr[i].f);
      }
    sort(arr,arr+n);
    rep(i,n)
      {
      if(arr[i].s>=last){
      res++;
      last=arr[i].f;
      }    
    }
    printf("%d\n",res);
    }
return 0;
}

