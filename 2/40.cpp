#include <iostream>
using namespace std;

int main() {
  int n;
  while(cin >> n, n) {
    int ab, am = 0, y;
    cin >> y;
    for(int i = 0; i < n; i++) {
      int b, r, t, m;
      cin >> b >> r >> t;
      if(t == 1) m = 10000*(1+y*(double)r/100);
      else {
	double d = 1 + (double)r/100;
	for(int j = 1; j < y; j++) {
	  d *= 1 + (double)r/100;
	}
	m = 10000*d;
      }

      if(m > am) {
	ab = b;
	am = m;
      }
    }
    cout << ab << endl;
  }
}
