#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
  int n, d;
  string s;
  map<int, int> m, lm;
  
  while(getline(cin, s) && s.size() > 0) {
    sscanf(s.c_str(), "%d,%d", &n, &d);
    m[n]++;
  }

  while(getline(cin, s) && s.size() > 0) {
    sscanf(s.c_str(), "%d,%d", &n, &d);
    lm[n]++;
  }

  for(auto it = m.begin(); it != m.end(); it++) {
    int index = it->first;
    if(lm[index] > 0) {
      int sum = m[index] +lm[index];
      cout << index << ' ' << sum << endl;
    }
  }
}
