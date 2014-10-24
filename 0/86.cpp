//解けていない


#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main() {
  int a, b;
  while(cin >> a >> b) {
    int field[110] = {};
    field[a]++;
    field[b]++;

    while(cin >> a >> b, a || b) {
      field[a]++;
      field[b]++;
    }

    bool flag = true;
    loop(i, 3, 110) if(field[i]%2) flag = false;

    if(field[1]%2 && field[2]%2 && flag) cout << "OK" << endl;
    else cout << "NO" << endl;
  }
}

