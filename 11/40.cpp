//途中(到達出来ない場合を考えていない)

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

const int INF = 1 << 25;

char field[25][25];
int w, h;
int sx, sy, ax, ay;
int cnt;

int d[25][25];
int step[25][25];

int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

int dfs(int x, int y) {
  queue<pii> que;
  rep(i, h) rep(j, w) d[i][j] = INF;
  que.push(pii(sy, sx));
  d[sy][sx] = 0;

  while(que.size()) {
    pii p = que.front(); que.pop();
    if(cnt == 0) {
      ax = p.second, ay = p.first;
      break;
    }
    rep(i, 4) {
      int nx = p.second+dx[i], ny = p.first+dy[i];
      if(0 <= nx && nx << w && 0 <= ny && ny < h && field[ny][nx] != 'x') {
        if(d[ny][nx] > d[p.second][p.first]+1) {
          d[ny][nx] = d[p.second][p.first] + 1;
          que.push(pii(ny,nx));
        }
      }
    }
  }
  return d[ay][ax];
}

int main() {
  while(cin >> w >> h, w+h) {
    cnt = 0;
    rep(i, h) {
      rep(j, w) {
        cin >> field[i][j];
        if(field[i][j] == 'o') {
          field[i][j] = '.';
          sx = j; sy = i;
        } else if(field[i][j] == '*') cnt++;
      }
    }
    cout << dfs(sx, sy) << endl;
  }
}

