#include <iostream>
using namespace std;

int main() {
  int n;
  while(cin >> n, n) {
    int p[n];
    for(int i = 0; i < n; i++) cin >> p[i];

    for(int i = 0; i < n-1; i++) {
      cout << p[i];
      if(p[i]+1 == p[i+1]) {
        cout << '-';
        for(int j = i+1; j < n-1; j++) {
          if(p[j]+1 != p[j+1]) {
            cout << p[j];
            i = j;
            break;
          }
          if(j+1 == n-1) i = j;
        }
      }
      if(p[i]+1 != p[i+1]) cout << ' ';
    }
    cout << p[n-1] << endl;
  }
}
