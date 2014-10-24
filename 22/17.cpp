#include <bits/stdc++.h>
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

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int field[110][110];
PII p[110][110];

int dfs(int x, int y, int num) {
  while(field[x][y] == 0) {
    field[x][y] = num;
    int nx = p[x][y].first, ny = p[x][y].second;
    x = nx, y = ny;
  }

  if(field[x][y] == num) return 1;
  else return 0;
}

int main() {
  int n;  

  while(cin >> n, n) {

   REP(i, n) {
      REP(j, n) {
	int x, y;
	cin >> x >> y;
	p[i][j] = MP(y, x);
	field[i][j] = 0;
      }
    }

   int ans = 0;
   int cnt = 1;
   REP(i, n) {
     REP(j,n) {
       if(field[i][j] == 0) {
	 ans += dfs(i, j, cnt);
	 cnt++;
       }
     }
   }
   cout << ans << endl;
  }	
}
