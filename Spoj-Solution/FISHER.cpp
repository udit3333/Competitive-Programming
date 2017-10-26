#include <bits/stdc++.h>
using namespace std;
int n,t;
int a1[55][55],a2[55][55],a3[55][1005];
void go()
{
	for(int i=0;i<=53;i++)
		{
			for(int j=0;j<=1003;j++)a3[i][j]=1000000008;
		}
	queue<pair<pair<int,int>,int > > q;
	q.push({{1,0},0});
	while(!q.empty())
	{
		pair< pair<int,int>,int >  x=q.front();q.pop();
		int x1=x.first.first,x2=x.first.second,x3=x.second;
		if(x3>t)continue;
		if(x2>=a3[x1][x3])continue;
		a3[x1][x3]=x2;
		for(int i=1;i<=n;i++)
	    {
	    	if(i==x1)continue;
	    	q.push({{i,x2+a2[x1][i]},x3+a1[x1][i]});
	    }
	}
	return;
}
int main()
{
	while(1)
	{
		cin>>n>>t;
		if(n==0&&t==0)break;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)cin>>a1[i][j];
		}
	    for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)cin>>a2[i][j];
		}
		go();
		int minn=1000000008,tim=0;
		for(int i=0;i<=t;i++)
		{
			if(a3[n][i]<minn)
			{
				minn=a3[n][i];
				tim=i;
			}
		}
		cout<<minn<<" "<<tim<<endl;
	}
	return 0;
}