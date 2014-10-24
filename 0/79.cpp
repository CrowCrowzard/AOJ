#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int main() {
  double x, y;
  vector<pair<double, double>> v;
    char c;
    while(cin >> x >> c >> y) v.push_back(make_pair(x,y));     

double S = 0;
for(int i = 0; i < v.size()-2; i++) {
  double x1 = v[i].first,   y1 = v[i].second;
  double x2 = v[i+1].first, y2 = v[i+1].second;
  double x3 = v[i+2].first, y3 = v[i+2].second;
  
  double a = hypot(x2-x1, y2-y1), b = hypot(x3-x2, y3-y2), c = hypot(x1-x3, y1-y3);
  double z = (a+b+c) / 2;
  S += sqrt(z * (z-a) * (z-b) * (z-c));
 }
    printf("%.6lf\n", S);
		 }
