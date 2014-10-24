#include <iostream>
#include <string>
using namespace std;

int main() {
  int n; cin >> n;
  for(int i = 0; i < n; i++) {
    string s; cin >> s;
    bool a[4] = {}, b[3] = {};
    int cnt = 0;
    for(int j = 0; j < s.size(); j++) {
      if(s[j] == '>') {
        if(!a[1] && s[j+1] == '\'') a[0] = true;
        if(s[j+1] == '^') b[0] = true;
      } else if(a[0] && s[j] == '=') {
        a[1] = true;
        cnt++;
      } else if(b[0] && s.substr(j,2) == "Q=") {
        b[1] = true;
      } else if(a[1] && s[j] == '#') {
        a[0] = false;
        a[2] = true;
      } else if(a[2] && s[j] == '=') {
        cnt--;
      } else if(a[2] && cnt == 0 && j+1 == s.size() && s[j] == '~') {
        a[3] = true;
      } else if(b[1] && j+2 == s.size() && s.substr(j,2) == "~~") {
        b[2] = true;
      }
    }

    if(a[3]) cout << 'A' << endl;
    else if(b[2]) cout << 'B' << endl;
    else cout << "NA" << endl;
  }
}

