#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  double r, s, l;

  cin >> r;
  s = M_PI * r * r;
  l = 2 * M_PI * r;

  printf("%.6lf %.6lf\n", s, l);
}
