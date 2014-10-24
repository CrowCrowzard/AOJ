#include <bits/stdc++.h> // only for GCC
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

template<class T> inline T sqr(T x) {return x*x;}

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
typedef unsigned long long ULL;

#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const double EPS = 1e-10;
const double PI  = acos(-1.0);

#define CLR(a) memset((a), 0 ,sizeof(a))

#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

int dx[8] = {-1, 0, 1, 0, -1, -1, 1, 1};
int dy[8] = {0, -1, 0, 1, -1, 1, -1, 1};

int main() {
  int n;
  cin >> n;

  REP(i, n) {
    string s;
    cin >> s;
    int h = (s[0]-'0') * 10 + (s[1]-'0');
    int m = (s[3]-'0') * 10 + (s[4]-'0');

    double angleh = h*30 + (double)m/60 * 30;
    double anglem = m * 6; 

    int ans;
    if(angleh > anglem) ans = angleh - anglem;
    else ans = anglem - angleh;

    if(ans > 180) {
      if(angleh > anglem) ans = 360-angleh + anglem;
      else ans = 360-anglem + angleh;
    }

    if(0 <= ans && ans < 30) cout << "alert" << endl;
    else if(90 <= ans && ans <= 180) cout << "safe" << endl;
    else cout << "warning" << endl;
  }  
}
