#include <iostream>
using namespace std;

int main() {
  int n;
  while(cin >> n, n) {
    int ans = 0;
    for(int i = 0; i < n/4; i++) {
      int p;
      cin >> p;
      ans += p;
    }
    cout << ans << endl;
  }
}
