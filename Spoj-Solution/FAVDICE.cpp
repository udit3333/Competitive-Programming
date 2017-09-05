//FAVDICE - Favorite Dice
//consider Xi as random variable which is expectation of ith value on dice after i-1 distinct values. 
//Now in each turn either it is the ith value or one from the previous i-1 values.
//So Xi can be consider as gp with a sucess probability of (n-(i-1))/n which is also the reciprocal of expectation of Xi i.e E[Xi].
//By linear property of expectation E[x]=E[X1]+E[X2]+.....+E[Xn].  
#include <iostream>
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
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
    {double res=0;
    int n;
    scanf("%d",&n);
    rep1(i,n)res+=1/(double)i;
    printf("%.2f\n",res=res*n);
    }
  return 0;
}

