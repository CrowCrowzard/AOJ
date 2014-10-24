#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
  int n;
  while(cin >> n, n) {
    char t[n]; 
    int p[n][3];
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < 3; j++) {
        p[i][j] = 0;
      }
    }

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if(j == 0) cin >> t[i];
        else {
          int x; cin >> x;
          p[i][x]++;
        }
      }
    }
    
    for(int i = 0; i < n; i++) {
      int wm = -1, lm = 1000, pos;
      for(int j = 0; j < n; j++) {
        if(p[j][0] >= wm) {
          if(p[j][0] == wm && p[j][1] >= lm) continue;
          wm = p[j][0], lm = p[j][1], pos = j;
        }
      }
      printf("%c\n",t[pos]);
      p[pos][0] = -1, p[pos][1] = 1000;
    } 
  }
}
