//途中




#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int dep[60][60];
//int tx, ty;
//int kx, ky;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int bfs(int tx, int ty, int kx, int ky) {
  queue<vi> que;
  que.push(Q(tx, ty, kx, ky, 1));
}

 // rep(i, 4) {

int main() {
  int x, y;
  while(cin >> x >> y, x+y) {
    int tx, ty, kx, ky;
    cin >> tx >> ty;
    cin >> kx >> ky;
    rep(i, x) rep(j, y) cin >> dep[y][x];
    int ans = bfs(tx, ty, kx, ky);
    if(ans != -1) cout << ans << endl;
    else cout << "NA" << endl;
  }
}

