#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, m; cin >> n >> m;

  int ans = m;
  for(int i = 0; i < n; i++) {
    int x, y; cin >> x >> y;
    if(m < 0) ans = 0;
    if(m >= 0) m += x-y;
    ans = max(ans, m);
  }
  cout << ans << endl;
}


