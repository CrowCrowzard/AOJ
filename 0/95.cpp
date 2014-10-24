#include <iostream>
using namespace std;

int main() {
  int n, a, v, ma, mv = -1;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a >> v;
    if(v > mv) {
      ma = a;
      mv = v;
    } 
    else if(v == mv && ma > a) {
      ma = a;
    }
  }
  cout << ma << ' ' << mv << endl;
}
