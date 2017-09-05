#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long  int
#define pi pair<int,int>
#define pii pair<pi,int>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
struct node{
int l;
int r;
int maxx;
int total;
};
int a[50005];
node b[200005];
int n;
void initialize(int x,int start,int end)
{

if(start==end)
{
b[x].l=a[start];
b[x].r=a[start];
b[x].maxx=a[start];
b[x].total=a[start];
return;
}
initialize(2*x,start,(start+end)/2);
initialize(2*x+1,(start+end)/2+1,end);
b[x].maxx=max(b[2*x].r+b[2*x+1].l,max(b[2*x].maxx,b[2*x+1].maxx));
b[x].total=b[2*x].total+b[2*x+1].total;
b[x].l=max(b[2*x].l,b[2*x+1].l+b[2*x].total);
b[x].r=max(b[2*x+1].r,b[2*x].r+b[2*x+1].total);
}
node query(int x,int start,int end,int i,int j)
{

if(i>end||j<start||start>end)
{
node s;
s.l=INT_MIN;
s.r=INT_MIN;
s.maxx=INT_MIN;
s.total=INT_MIN;
return s;
}
if(i<=start&&j>=end)
{
return b[x];	
}
node left,right,res;
left=query(2*x,start,(start+end)/2,i,j);
right=query(2*x+1,(start+end)/2+1,end,i,j);
if(left.l==INT_MIN)return right;
if(right.l==INT_MIN)return left;
res.maxx=max(left.r+right.l,max(left.maxx,right.maxx));
res.total=left.total+right.total;
res.l=max(left.l,right.l+left.total);
res.r=max(right.r,left.r+right.total);
return res;
}
int main()
{
scanf("%d",&n);

for(int i=1;i<=n;i++)
scanf("%d",&a[i]);
initialize(1,1,n);
int m;
scanf("%d",&m);
while(m--)
{
node temp;
int i,j;
scanf("%d",&i);
scanf("%d",&j);
temp=query(1,1,n,i,j);
printf("%d\n", temp.maxx);
}
return 0;
}


