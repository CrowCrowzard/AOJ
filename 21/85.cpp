#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  for(int i = 0; i < n; i++) {
    int X, Y, W, H; cin >> X >> Y >> W >> H;
    int cat; cin >> cat;

    int cnt = 0;
    for(int j = 0; j < cat; j++) {
      int x, y; cin >> x >> y;
      if(X <= x && x <= X+W && Y <= y && y <= Y+H) cnt++;
    }
    cout << cnt << endl;
  }
}
