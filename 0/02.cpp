#include <iostream>
using namespace std;

int main() {
  int a, b, sum, res;

  while(cin >> a >> b) {
    res = 0;
    sum = a+b;

    while(sum/10 != 0) {
      sum /= 10;
      res++;
    }
    cout << res+1 << endl;
  }
}
