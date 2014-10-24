#include <iostream>
using namespace std;

int main() {
  int p[5];
  while(cin >> p[0], p[0]) {
    for(int i = 1; i < 5; i++) cin >> p[i];
    
    bool flag[3] = {};
    for(int i = 0; i < 5; i++) {
      flag[p[i]-1] = true;
    }

    int win = 0, lose = 0;
    if(flag[0] && flag[1] && flag[2]) {
      win = lose = 0;
    } else if(flag[0] && flag[1]) {
      win = 1, lose = 2;
    } else if(flag[1] && flag[2]) {
        win = 2, lose = 3;
    } else if(flag[2] && flag[0]) {
        win = 3, lose = 1;
    }  
    for(int i = 0; i < 5; i++) {
      if(p[i] == win) p[i] = 1;
      else if(p[i] == lose) p[i] = 2;
      else p[i] = 3;
    }

    for(int i = 0; i < 5; i++) cout << p[i] << endl;
  }
}
