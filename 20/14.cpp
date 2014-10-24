#include <iostream>
using namespace std;

int h, w;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char field[60][60];
char his;

void dfs(int x, int y) {
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cout << field[i][j];
    }
    cout << endl;
  }
  cout << endl;

  if(0 <= x && x < w && 0 <= y && y < h) {
    if(field[y][x] != 'B' || field[y][x] != 'W') field[y][x] = his;
    for(int i = 0; i < 4; i++) {
      int tx = x+dx[i], ty = y+dy[i];
      if(his == 'w' && field[ty][tx] == 'B' || his == 'b' && field[ty][tx] == 'W') his = '#';
      dfs(tx, ty);
    }
  }
} 

int main() {
  while(cin >> w >> h, w+h) {
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
	cin >> field[i][j];
      }
    }

    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
	his = field[i][j] + ('a' - 'A');
	if(field[i][j] == 'B' || field[i][j] == 'W') dfs(i, j);
      }
    }

    int ab = 0, aw = 0;
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
	if(field[i][j] == 'b') ab++;
	if(field[i][j] == 'w') aw++;
      }
    }

    cout << ab << ' ' << aw << endl;
  }
}

