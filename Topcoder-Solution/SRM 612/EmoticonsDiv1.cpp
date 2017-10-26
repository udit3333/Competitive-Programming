#include <bits/stdc++.h>
using namespace std;
#define ll long long  int
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1000000
#define pi pair<int,int>
using namespace std;
int dp[1005][1005],s;
map<pi,bool> m;
int recur(int x,int y)
{
    //cout<<x<<" "<<y<<endl;
    if(x<0||y<0)return INF;
    if(x>=s)return (x-s);
    if(x>1000||y>1000)cout<<"hello"<<endl;
    if(dp[x][y]!=-1)return dp[x][y];
    dp[x][y]=INF;
    if(x>0)dp[x][y]=min(dp[x][y],1+recur(x-1,y));
   // if(x!=y)dp[x][y]=min(dp[x][y],1+recur(x,x));
    if((x+y)!=x)dp[x][y]=min(dp[x][y],1+recur(x+y,y));
    return dp[x][y];
}
class EmoticonsDiv1 {
    public:
    int printSmiles(int smiles) {
        s=smiles;
        memset(dp,-1,sizeof(dp));
        return recur(1,0);
    }
};

// CUT begin
ifstream data("EmoticonsDiv1.sample");

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

bool do_test(int smiles, int __expected) {
    time_t startClock = clock();
    EmoticonsDiv1 *instance = new EmoticonsDiv1();
    int __result = instance->printSmiles(smiles);
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
        int smiles;
        from_stream(smiles);
        next_line();
        int __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(smiles, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1505507157;
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
        cout << "EmoticonsDiv1 (250 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
