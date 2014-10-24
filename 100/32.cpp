#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main() {
  stack<char> sta;
  string s;
  while(cin >> s, s != "quit") {
    if(s == "push") {
      char c; cin >> c;
      sta.push(c);
    } else {
      cout << sta.top() << endl;
      sta.pop();
    }
  }
}

