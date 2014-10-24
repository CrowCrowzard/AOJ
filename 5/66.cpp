#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int team[110] = {};

  for(int i = 0; i < n*(n-1)/2; i++) {
    int a, b, ap, bp; cin >> a >> b >> ap >> bp;
    if(ap > bp) team[a] += 3;
    else if(ap < bp) team[b] += 3;
    else {
      team[a]++;
      team[b]++;
    }
  }

  int cnt = n;
  while(cnt) {
    int m = -1;
    for(int i = 1; i <= n; i++) {
      if(m < team[i]) {
        m = team[i];
      }
    }
    
    int same = 0;
    for(int i = 1; i <= n; i++) {
      if(m == team[i]) {
        team[i] = (n-cnt+1) * -1;
        same++;
      }
    }
    cnt -= same;
  }
  for(int i = 1; i <= n; i++) cout << team[i]*-1 << endl;
}
