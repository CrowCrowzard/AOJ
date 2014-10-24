#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  while(cin >> n >> m, n+m) {
    vector<int> field(n), dice(m);
    for(int i = 0; i < n; i++) cin >> field[i];
    for(int i = 0; i < m; i++) cin >> dice[i];
    
    int p = 0, cnt = 0;
    while(p < n-1) {
      p +=  dice[cnt] + field[p+dice[cnt]];
      cnt++;
    }
    cout << cnt << endl;
  }
}
