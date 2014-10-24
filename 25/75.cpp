//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
typedef unsigned long long ULL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

//debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

int main() {
  int n;
  string s;

  cin >> s;
  n = s.size();

  REP(i, n) {
    char c = s[i];
    if(c == 'A' || c == 'D' || c == 'I' || c == 'N' || c == 'U' || c == 'Y' ||c == 'Z') {
      int A = 0, D = 0, I = 0, N = 0, U = 0, Y = 0, Z = 0;
      for(int j = i; j < 8; j++) {
	c = s[j];
	if(c == 'A') A++;
	else if(c == 'D') D++;
	else if(c == 'I') I++;
	else if(c == 'N') N++;
	else if(c == 'U') U++;
	else if(c == 'Y') Y++;
	else if(c == 'Z') Z++;
      }
      if(A == 2 && (D == 1 || Z == 1) && I == 1 && N == 2 && U == 1 && Y == 1){
	  s[i] = 'A';
	  s[i+1] = 'I';
	  s[i+2] = 'Z';
	  s[i+3] = 'U';
	  s[i+4] = 'N';
	  s[i+5] = 'Y';
	  s[i+6] = 'A';
	  s[i+7] = 'N';
	  i += 7;
      }
    }
  }
  cout << s << endl;  
}
