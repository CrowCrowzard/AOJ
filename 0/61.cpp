#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main() {
  int id, solve;
  map<int, int> m;
  while(scanf("%d,%d", &id, &solve), id+solve) {
    m.insert(make_pair(id, solve));
  }

  int rank = 1;
  int cnt = 0;
  cout << m.size() << endl;
  while(cnt != m.size()) {
    cnt = 0;
    int max = 0;
    map<int,int>iterator::it = m.begin();
    while(it != m.end()) {
      if(it->second > max) {
	max = it->second;
      }
      it++;
    }
     
    it = m.begin();
    while(it != m.end()) {
      if(it->second == max) {
	it->second = -rank;
      }
      if(it->second < 0) cnt++;
      it++;
    }
    rank++;
  }

  while(cin >> id) cout << -m[id] << endl;
}
