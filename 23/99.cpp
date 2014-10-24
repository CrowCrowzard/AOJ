#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main() {
  int n;
  bool flag[110][110];
  while(cin >> n, n) {
    rep(i, n+1) rep(j, n+1) flag[i][j] = false;

    rep(i, n) {
      int m; cin >> m;
      rep(j, m) {
        int x; cin >> x;
        flag[i][x] = true;
      }
    }

    int k; cin >> k;
    vi tmp(k);
    rep(i, k) cin >> tmp[i];

    vi ans;
    rep(i, n) {
      rep(j, k) {
        if(!flag[i][tmp[j]]) break;
        if(j == k-1) ans.push_back(i+1);
      }
    }
    if(ans.size() == 1) cout << ans[0] << endl;
    else cout << -1 << endl;
  }
}

