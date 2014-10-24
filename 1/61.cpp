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
typedef pair<int,int> pii;

int main() {
  int n;
  while(cin >> n, n) {
    vector<pii> a;
    rep(i, n) {
      int c, m1, s1, m2, s2, m3, s3, m4, s4;
      cin >> c >> m1 >> s1 >> m2 >> s2 >> m3 >> s3 >> m4 >> s4;
      int sum = (m1+m2+m3+m4)*60 + (s1+s2+s3+s4);
      a.push_back(make_pair(sum, c));
    }
    sort(all(a));
    vector<pii>::iterator it = a.begin();
    cout << it->second << endl; it++;
    cout << it->second << endl;

    it = a.end(); it -= 2;
    cout << it->second << endl;
  }
}

