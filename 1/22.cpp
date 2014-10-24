#include <iostream>
using namespace std;

int n;
int field[15][15];
int jump[12][2] = {
  {-2,-1},{-2,0},{-2,1},
  {-1,2},{0,2},{1,2},
  {-1,-2},{0,-2},{1,-2},
  {2,-1},{2,0},{2,1}
};

bool dfs(int x, int y, int cnt) {
  bool b = false;
  for(int i = 0; i < 12; i++) {
    int nx = x+jump[i][0], ny = y+jump[i][1];
    if(0 <= nx && nx < 10 && 0 <= ny && ny < 10 && field[nx][ny] != -1) {
      for(int i = -1; i <= 1; i++) {
        for(int j = -1; j <= 1; j++) {
          int tx = nx+i, ty = ny+j;
          if(0 <= tx && tx < 10 && 0 <= ty && ty < 10) { 
            if(field[tx][ty] == cnt) { 
              if(cnt == n) return true;
              else b = dfs(tx, ty, cnt+1);
              if(b) return true;
            }
          }
        }
      }
    }
  }
  return false;
}

int main() {
  int sx, sy;
  while(cin >> sx >> sy, sx+sy) {
    for(int i = 0; i < 15; i++) {
      for(int j = 0; j < 15; j++) {
        field[i][j] = -1;
      }
    }

    cin >> n;
    for(int i = 0; i < n; i++) {
      int x, y; cin >> x >> y;
      field[x][y] = i+1;
      for(int i = -1; i <= 1; i++) {
        for(int j = -1; j <= 1; j++) {
          if(0 <= i+x && i+x < 10 && 0 <= j+y && j+y < 10 && field[i+x][j+y] == -1) field[i+x][j+y] = 0;
        }
      }
    }

    if(dfs(sx, sy, 1)) cout << "OK" << endl;
    else cout << "NA" << endl;
  }
}

