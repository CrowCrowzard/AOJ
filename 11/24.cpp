#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;

int main() {
  int n, q;
  while(cin >> n >> q, n+q) {
    int s[100] = {};
    rep(i, n) {
      int m; cin >> m;
      rep(j, m) {
        int d; cin >> d;
        s[d-1]++;
      }
    }

    int  cnt = -1, p;
    rep(i, 100) {
      if(cnt < s[i]) {
        cnt = s[i];
        p = i+1;
      }
    }
    if(cnt >= q) cout << p << endl;
    else cout << 0 << endl;
  }
}

