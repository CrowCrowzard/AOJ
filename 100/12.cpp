#include <iostream>
using namespace std;

int main() {
  int H, W;

  while(1) {
    cin >> H >> W;
    if(H+W == 0)break;

    for(int i = 0; i < H; i++) {
      for(int j = 0; j < W; j++) cout << '#';
      cout << endl;
    }
    cout << endl;
  }
}
