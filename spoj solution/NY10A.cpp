#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[8];
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
memset(a,0,sizeof(a));	
int n;
scanf("%d",&n);
string s;
cin>>s;
for(int i=0;i<s.length()-2;i++)
{
string temp="";
temp+=s[i];
temp+=s[i+1];
temp+=s[i+2];
if(temp.compare("TTT")==0)
a[0]++;
else if(temp.compare("TTH")==0)
a[1]++;
else if(temp.compare("THT")==0)
a[2]++;
else if(temp.compare("THH")==0)
a[3]++;
else if(temp.compare("HTT")==0)
a[4]++;
else if(temp.compare("HTH")==0)
a[5]++;
else if(temp.compare("HHT")==0)
a[6]++;
else if(temp.compare("HHH")==0)
a[7]++;
}
cout<<n<<" ";
for(int i=0;i<8;i++)
cout<<a[i]<<" ";
cout<<endl;
}
return 0;	
}


