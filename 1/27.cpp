#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int index[6][5] {
  {'a', 'b', 'c', 'd', 'e'},
  {'f', 'g', 'h', 'i', 'j'},
  {'k', 'l', 'm', 'n', 'o'},
  {'p', 'q', 'r', 's', 't'},
  {'u', 'v', 'w', 'x', 'y'},
  {'z', '.', '?', '!', ' '},
};

int main() {
  string s;
  while(cin >> s) {
    if(s.size()%2) cout << "NA" << endl;
    else {
      string ans;
      for(int i = 0; i < s.size(); i += 2) {
        int column = s[i]-'1', row = s[i+1]-'1';
        if(column > 5 || row > 4) {
          cout << "NA" << endl;
          break;
        }
        ans += index[column][row];
        if(i+2 == s.size()) cout << ans << endl;
      }
    }
  }
}

