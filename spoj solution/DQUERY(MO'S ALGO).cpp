//DQUERY - D-query
//Dquery using mo's algorithm.Time complexity O((n+q)*sqrt(n)).
//n=number of elements in array
//q=number of queries on array
#include <iostream>
#include <climits>
#include <algorithm>
#include <cstring>
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
#define N 30005
#define M 1000005
#define Q 200005
#define B 175
int arr[N],coun[M],res[Q],ans=0;
pii dquery[Q];
#define fastscan(n) scanf("%d", &n)
void add(int index)
{ coun[arr[index]]++;
	if(coun[arr[index]]==1)ans++;
}
void rem(int index)
{ coun[arr[index]]--;
	if(coun[arr[index]]==0)ans--;
}
bool comp(pii i,pii j)
{
	if(i.f.f/B<j.f.f/B)return 1;
	else if(i.f.f/B>j.f.f/B)return 0;
	else {
	if(i.f.s<j.f.s)return 1;
	else return 0;
	}
}
int main()
{  int n,q;
   fastscan(n);
   rep1(i,n) fastscan(arr[i]);
   fastscan(q);
   rep(i,q)
       {
       fastscan(dquery[i].f.f);
       fastscan(dquery[i].f.s);
       dquery[i].s=i;
       }
	 sort(dquery,dquery+q,comp);
	 int l=dquery[0].f.f,r=dquery[0].f.s;
	 for(int i=l;i<=r;i++)add(i);
	 res[dquery[0].s]=ans;
   for(int i=1;i<q;i++)
       {
       while(l!=dquery[i].f.f)
       {
          if(l>dquery[i].f.f)add(--l);
          else rem(l++);
       }
       while(r!=dquery[i].f.s)
       {
          if(r>dquery[i].f.s)rem(r--);
           else add(++r);
       }
       res[dquery[i].s]=ans;
       }
    rep(i,q)
    printf("%d\n",res[i]);
    return 0;
}

