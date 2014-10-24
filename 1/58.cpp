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
  long long n;
  while(cin >> n, n) {
    int cnt = 0;
    while(n != 1) {
      if(n%2 == 0) n /= 2;
      else n = 3*n + 1;
      cnt++;
    }
    cout << cnt << endl;
  }
}

