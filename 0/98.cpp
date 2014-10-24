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
  vvi dp(n+1, vi(n+1));

  rep(i, n+1) {
    rep(j, n+1) {
      if(i == 0 || j == 0) {
        dp[i][j] = 0;
        continue;
      }
      int x; cin >> x;
      dp[i][j] =  dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1]+ x;
    }
  }

  int ans = -1<<30;
  loop(i, 1, n+1) {
    loop(j, 1, n+1) {
      loop(k, 1, i+1) {
        loop(l, 1, j+1) {
          ans = max(ans, dp[i][j] - dp[k-1][j] - dp[i][l-1] + dp[k-1][l-1]);
        }
      }
    }
  }
  cout << ans << endl;
}

