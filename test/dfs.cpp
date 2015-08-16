#define MAX_N 1000000 // 大きい数を確保
#define MAX_M 1000000 // 大きい数を確保

// 入力
int N, M;
char field[MAX_N][MAX_M]; // フィールドの確保

// 現在位置(x,y)
void dfs(int x, int y) {
  // 今いるところを.に置き換える
  field[x][y] = '.';

  // 移動する8方向をループ
  for(int dx = -1; dx <= 1; dx++) {
    for(int dy = -1; dy <= 1; dy++) {
      // x方向にdx y方向にdy移動した場所を(nx,ny)とする
      int nx = x + dx, ny = y + dy;

      // nxとnyがフィールド内科どうかとfield[nx][ny]が対象先がどうかを判定
      if(0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'H')
        dfs(nx,ny);
    }
  }
  return;
}

