#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;

int main() {
  string s;
  while(getline(cin, s)) {
    if(s == "END OF INPUT") break;

    int cnt = 0;
    for(int i = 0; i < s.size(); i++) {
      char c = s[i];
      if(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) cnt++;
      else {
        cout << cnt;
        cnt = 0;
      }
    }
    cout << cnt << endl;
  }
}

