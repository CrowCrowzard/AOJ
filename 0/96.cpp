#include <iostream>
using namespace std;

int main() {
  int n;
  int dp[4100];
  fill(dp, dp+4100, 0);

  for(int i = 0; i <= 1000; i++) {
    for(int j = 0; j <= 1000; j++) {
      dp[i+j]++;
    }
  }

  while(cin >> n) {
    int ans = 0;
    for(int i = 0; i <= n; i++) {
      ans += dp[i] * dp[n-i];
    }
    cout << ans << endl;
  }
}

