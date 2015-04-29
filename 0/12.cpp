#include <iostream>
using namespace std;

int main() {
  double x[3], y[3], xp, yp;
  while(cin >> x[0]) {
    for(int i = 1; i < 6; i++) {
      if(i%2) cin >> y[i/2];
      else cin >> x[i/2];
    }
    cin >> xp >> yp;
  }


}
