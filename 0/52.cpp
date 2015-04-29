#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  while(cin >> n, n) {
    int two = 0, five = 0;
    for(int i = 0; i <= n; i++) {
      if(i%2 == 0) two += i/2;
      if(i%5 == 0) five += i/5;
    }
    cout << min(two, five) << endl;
  }
}
