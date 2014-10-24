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
  while(cin >> n) {
    n %= 39;
    if(n == 0) n = 39;
    if(n < 10) cout << "3C0" << n << endl;
    else cout << "3C" << n << endl;
  }
}

