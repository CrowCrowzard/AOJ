#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int p1, p2, p3, j1, j2;
  cin >> p1 >> p2 >> p3 >> j1 >> j2;
 
  int mp = min(p1, min(p2, p3));
  int mj = min(j1, j2);
  cout << mp+mj-50 << endl;
}
