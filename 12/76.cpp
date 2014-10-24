#include <iostream>
#include <algorithm>
using namespace std;

bool p[1300000];

void prime() {
  fill(p, p+1300000, true);
  p[0] = false;
  p[1] = false;
  for(int i = 2; i < 1300000; i++) {
    if(p[i]) {
      for(int j = 2; i*j < 1300000; j++) {
	p[i*j] = false;
      }
    }
  }
}

int main() {
  int n;
  prime();
  while(cin >> n, n) {
    int ans = 0;
    for(int i = n; !p[i]; i--) ans++;
    for(int i = n; !p[i]; i++) ans++;
    cout << ans << endl;
  }
}
