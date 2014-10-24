//途中（一から考え直す必要あり）

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;

int main() {
  int n; cin >> n;
  map<string, int> m;
  while(n--) {
    string s;
    int c;
    cin >> s >> c;
    if(m.find(s) == m.end()) m[s] = c;//m.insert(s, c);
    else m[s] += c;
  }
  map<string,int>::iterator it = m.begin();
  while(it != m.end()) {
    cout << it->first << ' ' << it->second << endl;
    it++;
  }
}

