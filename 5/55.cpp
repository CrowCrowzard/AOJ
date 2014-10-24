#include <iostream>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  int len = s.size();
  int n; cin >> n;
  
  int cnt = 0;
  while(n--) {
    string tmp; cin >> tmp;
    tmp += tmp.substr(0, len-1);
    for(int i = 0; i < tmp.size(); i++) {
      if(tmp.substr(i, len) == s) {
        cnt++;
        break;
      }
    }
  }
  cout << cnt << endl;
}

