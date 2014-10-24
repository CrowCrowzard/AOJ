#include <iostream>
using namespace std;

int stop[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 5, 4, 3, 2, 1};

int main() {
  int n; cin >> n;
  for(int i = 0; i < n; i++) {
    int s, g; cin >> s >> g;
    for(int j = 0; j < 15; j++) {
      if(j < 9 && s < 6 && g < 6 && s > g) j += 9;
      if(s == stop[j]) {
        for(int k = 0; k < 15; k++) {
          int num = (j+k)%15;
          cout << stop[num];
          if(stop[num] != g) cout << ' ';
          else {
              cout << endl;
              break;
          }
        }
      }
    if(s < 6 && s < g && j > 5) break;
    }
  }
}

