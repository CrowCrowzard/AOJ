#include <iostream>
using namespace std;

int main() {
  int H, W;

  while(1) {
    cin >> H >> W;
    if(H == 0 && W == 0)break;

    for(int i = 0; i < H; i++) {
      for(int j = 0; j < W; j++) {
	if(i == 0 || j == 0 || i == H-1 || j == W-1) {
	  cout << '#';
	  continue;
	}
	cout << '.';
      }
      cout << endl;
    }
    cout << endl;
  }
}
