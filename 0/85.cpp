#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;

  while(cin >> n >> m, n+m) {
    vector<int> s(n);

    int cnt = 0;
    for(int i = 0; n > 1; i += m) {
      if(s[i%m] != 0) cnt++;
      if(s[i%m] == 0) {
	while(true) {
	  if(s[(i%m)+1] != 0) break;
	  i++;
	}
      }
      if(cnt == m) {
	s[i%m] = 0;
	n--;
      }
    }
    
    auto it = s.begin();
    while(true) {
      if(*it != 0) {
	cout << *it << endl;
	break;
      }
    }
  }
}
