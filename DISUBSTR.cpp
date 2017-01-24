//DISUBSTR - Distinct Substrings
//to make the suffix array first sort the suffixes in lexographically order.we can directly sort the array using inbuilt sort and by using compare function but that costs a time complexity of O(n^2*logn).Below is the O(n^2*logn) solution.
/*
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long  int
#define pi pair<ll,int>
#define pii pair<pi,int>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
string s,rec[1005];
int sa[1005],ran[1005];
bool comp(int i,int j)
{if(rec[i].compare(rec[j])<=0)return 1;
return 0;
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{cin>>s;
int n=s.length();
for(int i=0;i<n;i++)
{rec[i]=s.substr(i,n-i);
sa[i]=i;
}

sort(sa,sa+n,comp);
for(int i=0;i<n;i++)
{
ran[sa[i]]=i;   
}
int k=0,temp=0;
for(int i=0;i<n;i++)
{
if(k)k--;
if(ran[i]==n-1)
{k=0;continue;}
int j=sa[ran[i]+1];
while(i+k<n&&j+k<n&&s[i+k]==s[j+k])k++;
temp+=k;
}
int res=(n*(n+1))/2-temp;
cout<<res<<endl;
}
return 0;
}
*/
//But we can sort the suffixes lexographically in O(n*logn*logn).By sorting them first on the basis of 1 character and then 2,4,8...so on.
//After sorting we need to make lcp array which can be implementing using kasai algorithm in linear running time.
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long  int
#define pi pair<ll,int>
#define pii pair<pi,int>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
struct block
{
int a,b,c;    
};
struct block arr[1005];
string s;
int sa[1005],ran[1005],rec[1005];
bool comp(struct block i,struct block j)
{if(i.a<j.a)return 1;
else if(i.a>j.a)return 0;
else{
if(i.b<j.b)return 1;
else if(i.b>=j.b)return 0;   
}
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{cin>>s;
int n=s.length();
for(int i=0;i<n;i++)
{
arr[i].a=s[i]-'A';
arr[i].b=0;
arr[i].c=i;
}
for(int j=1;j<2*n;j=j*2)
{
sort(arr,arr+n,comp);
if(j>=n)break;
int count=0;
for(int i=0;i<n;i++)
{rec[arr[i].c]=i;
int x=count;
if((arr[i].a!=arr[i+1].a)||(arr[i].b!=arr[i+1].b))count++;
arr[i].a=x;
}
for(int i=0;i<n;i++)
{
if((n-arr[i].c)<=j)arr[i].b=-1;
else
arr[i].b=arr[rec[arr[i].c+j]].a;
}}
for(int i=0;i<n;i++)
{sa[i]=arr[i].c;
ran[sa[i]]=i;   
}
int k=0,temp=0;
for(int i=0;i<n;i++)
{
if(k)k--;
if(ran[i]==n-1)
{k=0;continue;}
int j=sa[ran[i]+1];
while(i+k<n&&j+k<n&&s[i+k]==s[j+k])k++;
temp+=k;
}
int res=(n*(n+1))/2-temp;
cout<<res<<endl;
}
return 0;
}


