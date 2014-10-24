#include <iostream>
#include <algorithm>
using namespace std;

bool cal(long long n) {
  while(n%2 == 0) n /= 2;
  while(n%3 == 0) n /= 3;
  while(n%5 == 0) n /= 5;
 
  if(n == 1) return true;
  else return false;
}


int main() {
  long long m, n;
  while(cin >> m, m) {
    cin >> n;

    long long ans = 0;
    for(int i = m; i <= n; i++) {
      ans += cal(i);
    }
    cout << ans << endl;
  }
}
