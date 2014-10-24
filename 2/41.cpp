#include <iostream>
using namespace std;

int main() {
  int n;
  while(cin >> n, n) {
    for(int _ = 0; _ < n; _++) {
      int x[4], y[4], ans[4] = {};
      for(int i = 0; i < 4; i++) cin >> x[i];
      for(int i = 0; i < 4; i++) cin >> y[i];
      for(int i = 0; i < 4; i++) {
	for(int j = 0; j < 4; j++) {
	  if(i == j) {
	    if(i+j == 0) ans[0] += x[i]*y[i];
	    else ans[0] -= x[i]*y[i];
	  } else if(i+j == 1 || i+j == 5) {
	    if(i == 3 && j == 2) ans[1] -= x[i]*y[j];
	    else ans[1] += x[i]*y[j]; 
	  } else if(i+j == 2 || i+j == 4) {
	    if(i == 1 && j == 3) ans[2] -= x[i]*y[j];
	    else ans[2] += x[i]*y[j];
	  } else {
	    if(i == 2 && j == 1) ans[3] -= x[i]*y[j];
	    else ans[3] += x[i]*y[j];
	  }
	}
      }
      for(int i = 0; i < 3; i++) cout << ans[i] << ' ';
      cout << ans[3] << endl;
    }
  }
}
