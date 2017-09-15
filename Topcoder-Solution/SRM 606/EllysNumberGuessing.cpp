#include <bits/stdc++.h>
using namespace std;
#define ll long long  int
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<=n;i++)
#define rep2(i,a,b,c) for(ll i=a;i<=b;i+=c)
#define si(x) scanf("%d",&x)
#define sd(x) scanf("%lf",&x)
#define sf(x) scanf("%f",&x)
#define sll(x) scanf("%lld",&x)
#define pi pair<ll,ll>
#define pii pair<pi,ll>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back
#define maxn 100005
#define INF 10000000000005
#define NIL 0
#define source 100001
#define sink 100002 
#define one 1ll
#define block 317

using namespace std;

class EllysNumberGuessing {
    public:
    int getNumber(vector<int> guesses, vector<int> answers) {
        ll res=0,x1=0,x2=0;
        rep(i,guesses.size())
        {
        	//cout<<x1<<" "<<x2<<endl;
        	ll a=guesses[i]+answers[i],b=guesses[i]-answers[i];

        	if(x1==-1)
        	{
        		if(x2==a||x2==b)continue;
        		res=-2;break;
        	}
        	if(x2==-1)
        	{
        		if(x1==a||x1==b)continue;
        		res=-2;break;
        	}
        	if(i==0)
        	{
        		if(a<=1000000000)x1=a;
        		else x1=-1;
        		if(b>0)x2=b;
        		else x2=-1;
        		continue;
        	}
        	if(x1==a&&x2==b)
        	{
        		continue;
        	}
        	else if(x1==a||x1==b)
        	{
        		x2=-1;
        	}
        	else if(x2==b||x2==a)
        	{
        		x1=-1;
        	}
        	else
        	{
        		res=-2;break;
        	}

        }
        if(res==0)
        {
        	if(x1!=-1&&x2!=-1)res=-1;
        	else if(x1==-1)res=x2;
        	else res=x1;
        }
        if(x1==-1&&x2==-1)res=-2;
        return res;
    }
};

// CUT begin
ifstream data("EllysNumberGuessing.sample");

string next_line() {
    string s;
    getline(data, s);
    return s;
}

template <typename T> void from_stream(T &t) {
    stringstream ss(next_line());
    ss >> t;
}

void from_stream(string &s) {
    s = next_line();
}

template <typename T> void from_stream(vector<T> &ts) {
    int len;
    from_stream(len);
    ts.clear();
    for (int i = 0; i < len; ++i) {
        T t;
        from_stream(t);
        ts.push_back(t);
    }
}

template <typename T>
string to_string(T t) {
    stringstream s;
    s << t;
    return s.str();
}

string to_string(string t) {
    return "\"" + t + "\"";
}

bool do_test(vector<int> guesses, vector<int> answers, int __expected) {
    time_t startClock = clock();
    EllysNumberGuessing *instance = new EllysNumberGuessing();
    int __result = instance->getNumber(guesses, answers);
    double elapsed = (double)(clock() - startClock) / CLOCKS_PER_SEC;
    delete instance;

    if (__result == __expected) {
        cout << "PASSED!" << " (" << elapsed << " seconds)" << endl;
        return true;
    }
    else {
        cout << "FAILED!" << " (" << elapsed << " seconds)" << endl;
        cout << "           Expected: " << to_string(__expected) << endl;
        cout << "           Received: " << to_string(__result) << endl;
        return false;
    }
}

int run_test(bool mainProcess, const set<int> &case_set, const string command) {
    int cases = 0, passed = 0;
    while (true) {
        if (next_line().find("--") != 0)
            break;
        vector<int> guesses;
        from_stream(guesses);
        vector<int> answers;
        from_stream(answers);
        next_line();
        int __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(guesses, answers, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1505471878;
        double PT = T / 60.0, TT = 75.0;
        cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
        cout << "Score  : " << 250 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    set<int> cases;
    bool mainProcess = true;
    for (int i = 1; i < argc; ++i) {
        if ( string(argv[i]) == "-") {
            mainProcess = false;
        } else {
            cases.insert(atoi(argv[i]));
        }
    }
    if (mainProcess) {
        cout << "EllysNumberGuessing (250 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
