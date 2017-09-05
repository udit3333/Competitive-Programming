#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;	
int c=1;
scanf("%d",&t);
while(t--)
{
	
ll r;
cin>>r;
ll res=4*(r*r);
string s=to_string(res);
s+=".25";
cout<<"Case "<<c<<": "<<s<<endl;
c++;
}
return 0;	
}


