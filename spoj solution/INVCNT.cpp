#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[200005];
int b[200005];
//int c[200005];
int n1;
void update(int x, int delta)
{
      for(; x <= n1; x += x&-x)
        b[x] += delta;
}
ll query(int x)
{
     ll sum = 0;
     for(; x > 0; x -= x&-x)
        sum += b[x];
     return sum;
}
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {int n;
 scanf("%d",&n);
 n1=n;
 for(int i=0;i<n;i++)
 {scanf("%d",&a[i]);
 b[i]=a[i];
 }
 sort(b,b+n);
// memset(c,0,sizeof(c));
 int rank=1;
 unordered_map<int,int> m;
 
 for(int i=0;i<n;i++)
 {
 m[b[i]]=rank;	
 rank++;
 }
 for(int i=0;i<n;i++)
 {
 a[i]=m[a[i]];
 }
 m.clear();
 ll ans=0;
 memset(b,0,sizeof(b));
 for(int i=n-1;i>=0;i--)
 {
 ans+=query(a[i]);	
 update(a[i],1);	
 }
cout<<ans<<endl;
  }
 return 0;
}

