//BYTESE2 - The Great Ball
#include <iostream>
#include <algorithm>
#include <cstring>
#include <climits>
#include <vector>
#include <queue>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define si(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define ll long long  int
#define pi pair<int,int>
#define pii pair<int,pi>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
//std::ios::sync_with_stdio(false);
struct block
{
    int start,end,count;
};
struct compare  
{  
  bool operator()(const block& l, const block& r)  
  {  
      return l.start > r.start;  
  }  
}; 
int main()
{
    int t;si(t);
    while(t--)
    {
        priority_queue<block,vector<block>, compare > pq;
        int n;si(n);
        int res=0;
        while(n--)
        {
            int x,y;si(x);si(y);
            block temp;
            temp.start=x;temp.end=y;temp.count=1;
            pq.push(temp);
        }
        while(!pq.empty())
        {
            block curr=pq.top();pq.pop();
            res=max(res,curr.count);
            if(pq.empty())break;
            block next=pq.top();
            if(curr.end<=next.start)continue;
            pq.pop();
            if(curr.end>next.end)
            {
                block temp;
                temp.start=next.end;temp.end=curr.end;temp.count=curr.count;
                pq.push(temp);
                next.count+=curr.count;
                pq.push(next);
            }
            else if(curr.end<next.end)
            {
                block temp;
                temp.start=next.start;temp.end=curr.end;temp.count=next.count+curr.count;
                block temp2;
                temp2.start=curr.end;temp2.end=next.end;temp2.count=next.count;
                pq.push(temp);
                pq.push(temp2);
            }
            else
            {
                block temp;
                temp.start=next.start;temp.end=curr.end;temp.count=curr.count+next.count;
                pq.push(temp);
            }
            
        }
        printf("%d\n",res);
    }
    
    return 0;
}

