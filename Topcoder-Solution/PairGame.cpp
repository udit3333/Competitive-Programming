//SRM-620 DIV-1 250 Pointer
#include <bits/stdc++.h>
using namespace std;
class PairGame {
public:
	int maxSum(int, int, int, int);
};

int PairGame::maxSum(int a, int b, int c, int d) {
	int res=-1;
	map<pair<int,int> > m;
	while(a>0&&b>0)
	{
		m[{a,b}]=1;
		if(a>b)a-=b;
		else b-=a;
	}
	while(c>0&&d>0)
	{
		if(m.find({c,d})!=m.end())
		{
			res=c+d;break;
		}
		if(c>d)c-=d;
		else d-=c;
	}
    return res;
}

