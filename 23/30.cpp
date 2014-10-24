#include <iostream>
using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;
  while(n > 8) {
    n /= 3;
    ans++;
  }
  ans += 2;
  cout << ans << endl;
}
