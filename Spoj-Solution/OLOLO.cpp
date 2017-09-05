#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int n;	
scanf("%d",&n);
unordered_map<int,int> m;
unordered_map<int,int>::iterator it;
for(int i=0;i<n;i++)
{
int x;
scanf("%d",&x);
if(m.find(x)!=m.end())
{
m.erase(x);	
}
else 
m[x]=1;
}
it=m.begin();
cout<<it->first<<endl;
return 0;	
}


