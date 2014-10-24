#include <iostream>
#include <cstdio>
using namespace std;

char pos[10][8] = {
  {'*', ' ', '=', ' ', '*', '*', '*', '*'},
  {'*', ' ', '=', '*', ' ', '*', '*', '*'},
  {'*', ' ', '=', '*', '*', ' ', '*', '*'},
  {'*', ' ', '=', '*', '*', '*', ' ', '*'},
  {'*', ' ', '=', '*', '*', '*', '*', ' '},
  {' ', '*', '=', ' ', '*', '*', '*', '*'},
  {' ', '*', '=', '*', ' ', '*', '*', '*'},
  {' ', '*', '=', '*', '*', ' ', '*', '*'},
  {' ', '*', '=', '*', '*', '*', ' ', '*'},
  {' ', '*', '=', '*', '*', '*', '*', ' '},
};

int main() {
  int n, abcus[8][5], time = 0;
  while(cin >> n) {
    if(time++ > 0) cout << endl;
    char ans[8][5];
    int reed = 10000;
    int cnt = 0;
    while(cnt < 5) {
      int num = n/reed;
      for(int i = 0; i < 8; i++) {
        ans[i][cnt] = pos[num][i];
      }
      if(num > 0) n -= num * reed;
      reed /= 10;
      cnt++;
    }
    for(int i = 0; i < 8; i++) {
      for(int j = 0; j < 5; j++) {
       printf("%c", ans[i][j]);
      }
      cout << endl;
    }
  }
}
