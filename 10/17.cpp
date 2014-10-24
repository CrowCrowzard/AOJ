#include <iostream>
#include <deque>
using namespace std;

int main() {
  int n, r;
  while(cin >> n >> r) {
    deque<int> d;
    for(int i = 0; i < n; i++) {
      d.push_back(i);
    }

    for(int i = 0; i < r; i++) {
      deque<int> a, b;
      for(int j = 0; j < n; j++) {
        if(j < n/2) {
          b.push_back(d.front());
        } else {
          a.push_back(d.front());
        }
         d.pop_front();
      }

      int x; cin >> x;
      while(true) {
        if(a.empty()) break;
        for(int i = 0; i < x; i++) {
          if(a.empty()) break;
          d.push_back(a.front());
          a.pop_front();
        }
        if(b.empty()) break;
        for(int i = 0; i < x; i++) {
          if(b.empty()) break;
          d.push_back(b.front());
          b.pop_front();
        }
      }
    }
    cout << d.back() << endl;
  }
}
