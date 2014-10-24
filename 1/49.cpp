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
  double a, b, l[4] = {}, r[4] = {};
  while(cin >> a >> b) {
    if(a >= 1.1) l[0]++;
    else if(a >= 0.6) l[1]++;
    else if(a >= 0.2) l[2]++;
    else l[3]++;

    if(b >= 1.1) r[0]++;
    else if(b >= 0.6) r[1]++;
    else if(b >= 0.2) r[2]++;
    else r[3]++;
  }
  rep(i, 4) cout << l[i] << ' ' << r[i] << endl;
}

