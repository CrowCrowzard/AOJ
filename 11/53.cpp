#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  while(cin >> n >> m, n+m) {
    vector<int> t(n); int tsum = 0;
    for(int i = 0; i < n; i++) {
      cin >> t[i];
      tsum += t[i];
    }

    vector<int> h(n); int hsum = 0;
    for(int i = 0; i < m; i++) {
      cin >> h[i];
      hsum += h[i];
    }

    int diff = abs(tsum - hsum);
    sort(t.begin(), t.end());
    sort(h.begin(), h.end());

    int tc = 1000, hc = 1000;
    vector<int>::iterator tit = t.begin();
    while(tit != t.end()) {
      vector<int>::iterator hit = h.begin();
      while(hit != h.end()) {
	if(*hit-*tit > diff) break; 
	int sum = *tit + *hit;
	if(sum < tc+hc && tsum+*hit-*tit == hsum+*tit-*hit) {
	  tc = *tit, hc = *hit;
	  break;
	}
	if(tc != 1000) break;
	hit++;
      }
      if(tc != 1000) break;
      tit++;
    }
    if(tc != 1000) cout << tc << ' ' << hc << endl;
    else cout << -1 << endl;
  } 
}
