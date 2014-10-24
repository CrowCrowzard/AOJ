#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  int m, n;
 
  cin >> m >> n;
  int t[m][n];
 
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      cin >>t[i][j];
    }
  }
 
  int ans = 0;
  for(int i = 0; i < m; i++) {
    int cnt = 0;
    for(int j = 0; j < n; j++) {
      if(t[i][j] == 1) cnt++;
    }
    if(ans < cnt) ans = cnt;
  }
  cout << ans << endl;
}
