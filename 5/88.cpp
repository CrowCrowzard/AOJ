#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = n;

  char c;
  while(cin >> c, c != '=') {
    cin >> n;
    if(c == '+') ans += n;
    else if(c == '-') ans -= n;
    else if(c == '*') ans *= n;
    else ans /= n;
  }
  cout << ans << endl;
}
