#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll modulo(ll a,ll b,ll c){
    long long x=1,y=a; 
    while(b > 0){
        if(b%2 == 1){
            x=(x*y)%c;
        }
        y = (y*y)%c;
        b /= 2;
    }
    return x%c;
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
string s;
cin>>s;
ll b;
scanf("%lld",&b);
ll a=s[s.length()-1]-'0';
b=modulo(a,b,10);
cout<<b<<endl;
}
return 0;	
}


