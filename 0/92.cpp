//途中

#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

int main() {
  int n;
  while(cin >> n, n) {
    vector<vector<pii>> dp(n+1, vector<pii>(n+1));

    int ans = -1<<31;
    rep(i, n+1) {
      rep(j, n+1) {
        if(i == 0 || j == 0) {
          dp[i][j].first = dp[i][j].second = 0;
          continue;
        }
        char c; cin >> c;
        if(c == '*') dp[i][j].first = dp[i][j].second = 0;
        else {
          dp[i][j].first = dp[i][j-1].first+1;
          dp[i][j].second = dp[i-1][j].second+1;
        }
        if(dp[i][j].first == dp[i][j].second) ans = max(ans, dp[i][j].first);
      }
    }
    cout << ans << endl;
  }
}

