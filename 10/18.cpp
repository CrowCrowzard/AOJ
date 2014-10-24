#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  while(cin >> n) {
    vector<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    sort(p.begin(), p.end());

    long long ans = 0, total = 0;
    for(int i = 0; i < n; i++) {
      ans += total + p[i];
      total += p[i];
    }
    cout << ans << endl;
  }
}
