#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long ans = 0;
  for(int i = 0; i < n; i++) {
    int money;
    cin >> money;
    ans += money;
  }
  cout << ans/n << endl;
}
