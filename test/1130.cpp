#include <iostream>
using namespace std;

int w, h, cnt;
char field[20][20];

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

void dfs(int x, int y) {
  if(0 <= x && x < h && 0 <= y && y < w && field[x][y] == '.') { 
    cnt++;
    field[x][y] = '#';
    for(int i = 0; i < 4; i++) {
      dfs(x+dx[i], y+dy[i]);
    }
  }
}

int main() {
  while(cin >> w >> h, w+h) {
    int px, py;
    for(int i = 0, i < h; i++) {
      for(int j = 0, j < w; j++) {
        cin >> field[i][j];
        if(field[i][j] == '@') {
          px = i;
          py = j;
          field[i][j] = '.';
        }
      }
    }

    cnt = 0;
    dfs(px, py);
    cout << cnt << endl;
  } 
}
