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
#define INF 1000000000
#define NIL 0
#define source 100001
#define sink 100002 
#define one 1ll
#define block 317

using namespace std;
class PowerOfThree {
    public:
    /*string ableToGet(int x, int y) {
        if(bfs((ll)x,(ll)y))return "Possible";
        else return "Impossible";
    }*/
    string ableToGet(int x, int y)
{
    // to save us the issue of dealing with the % operation being flawed with
    // negative numbers, we can just use some symmetry, 
    // (x,y) is reachable if and only if (-x,y), (-x,-y) and (x,-y) are.
    x=abs(x);y=abs(y);
    while(x||y)
    {
        if((x%3)==0&&(y%3)!=0)
        {
            if(y%3==1)y=(y-1)/3;
            else y=(y+1)/3;
            x/=3;
        }
        else if((x%3)!=0&&(y%3)==0)
        {
            if(x%3==1)x=(x-1)/3;
            else x=(x+1)/3;
            y/=3;
        }
        else return "Impossible";
    }
    return "Possible";
}
};

// CUT begin
ifstream data("PowerOfThree.sample");

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

template <typename T>
string to_string(T t) {
    stringstream s;
    s << t;
    return s.str();
}

string to_string(string t) {
    return "\"" + t + "\"";
}

bool do_test(int x, int y, string __expected) {
    time_t startClock = clock();
    PowerOfThree *instance = new PowerOfThree();
    string __result = instance->ableToGet(x, y);
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
        int x;
        from_stream(x);
        int y;
        from_stream(y);
        next_line();
        string __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(x, y, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1505384371;
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
        cout << "PowerOfThree (250 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
