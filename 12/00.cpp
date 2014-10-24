#include <iostream>
#include <algorithm>
using namespace std;

bool p[101000];

void prime() {
  fill(p, p+101000, true);
  p[0] = false;
  p[1] = false;
  for(int i = 2; i < 101000; i++) {
    if(p[i]) {
      for(int j = 2; i*j < 101000; j++) {
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
    for(int i = 2; i < n; i++) {
      for(int j = i; j < n; j++) {
	if(p[i] && p[j] && i+j == n) ans++;
      }
    }
    cout << ans << endl;
  }
} 
