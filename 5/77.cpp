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
  int n; cin >> n;
  vvi p(n, vi(3));
  vi ans(n);

  rep(i, n) {
    rep(j, 3) {
      cin >> p[i][j];
    }
    ans[i] = 0;
  }

  rep(i, 3) {
    rep(j, n) {
      int x = p[j][i];
      if(x == 0) continue;
      for(int k = j+1; k < n; k++) {
        if(x == p[k][i]) {
          p[k][i] = 0;
          p[j][i] = 0;
        }
      }
      ans[j] += p[j][i];
    }
  }
  rep(i, n) cout << ans[i] << endl;
}

