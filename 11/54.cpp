#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

bool ms[310000];

void msprime() {
  fill(ms, ms+310000, false);
  for(int i = 1; i < 310000; i += 7) ms[i] = true;
  for(int i = 6; i < 310000; i += 7) ms[i] = true;
  for(int i = 6; i < 310000; i++) {
    if(ms[i]) {
      for(int j = 2; i*j < 310000; j++) {
        ms[i] = false;
      }
    }
  }
}

int main() {
  int n;
  msprime();
  vi msp;
  for(int i = 0; i < 310000; i++) {
    if(ms[i]) msp.push_back(i);
  }
  while(cin >> n, n != 1) {
    set<int> s;
    for(int i = 0; i < msp.size(); i++) {
      if(n < msp[i]) break;
      for(int j = 0; j < msp.size(); j++) {
        for(int k = 1; msp[i]*msp[j]*k <= n; k++) {
          if(n == msp[i]*msp[j]*k) s.insert(msp[i]);
        }
      }
    }

    cout << n << ':';
    set<int>::iterator it = s.begin();
    while(it != s.end()) {
      cout << ' ' << *it;
      it++;
    }
    cout << endl;
  }
}

