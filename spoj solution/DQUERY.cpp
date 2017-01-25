//DQUERY - D-query
//solution of dquery using binary indexed tree. 
#include <iostream>
#include <climits>
#include <algorithm>
#include <cstring>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define ll long long  int
#define pi pair<int,int>
#define pii pair<int,pi>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define N 30005
#define M 1000005
#define Q 200005
int tree[N],arr[N],last[M],res[Q];
pii dquery[Q];
void update(int index,int val)
{
while(index<N)
{
tree[index]+=val;
index+=index&(-index);
}
}
int query(int index)
{int res=0;
while(index>0)
{
res+=tree[index];
index-=index&(-index);
}return res;
}
int main()
{int n,q;
scanf("%d",&n);
rep1(i,n)scanf("%d",&arr[i]);
scanf("%d",&q);
rep(i,q)
{
scanf("%d",&dquery[i].s.f);
scanf("%d",&dquery[i].f);
dquery[i].s.s=i;
}
sort(dquery,dquery+q);
memset(last,-1,sizeof(last));
memset(tree,0,sizeof(tree));
int start=0;
rep1(i,n)
{
if(last[arr[i]]==-1)
{last[arr[i]]=i;
update(i,1);
}
else{
update(last[arr[i]],-1);
last[arr[i]]=i;
update(i,1);
}
if(start>=q)break;
while(dquery[start].f==i)
{
res[dquery[start].s.s]=query(i)-query(dquery[start].s.f-1);  
start++;
}
}
rep(i,q)
printf("%d\n",res[i]);
return 0;
}

