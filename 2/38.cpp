#include <iostream>
using namespace std;

int main() {
  int t, n;

  while(cin >> t, t) {
    int ans = 0; 
    cin >> n;
    for(int i = 0; i < n; i++) {
      int s, f;
      cin >> s >> f;
      ans += f-s;
    }
    if(ans >= t) cout << "OK" << endl;
    else cout << t-ans << endl;
  }
}
