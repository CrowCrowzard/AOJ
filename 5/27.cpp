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
typedef vector<bool> vb;

int main() {
  int n;
  while(cin >> n, n) {
    vb array(n);
    rep(i, n) {
      bool b; cin >> b;
      array[i] = b;
      if(i%2 == 1) {
        for(int j = i-1; j >= 0 && b != array[j]; j--) {
          array[j] = !array[j];
        }
      }
    }

    int cnt = 0;
    rep(i, n) {
      if(!array[i]) cnt++;
    }
    cout << cnt << endl;
  }
}

