#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int diff(int a, int b, int *x, int n) {
   if(n == -1) return abs(a-b);
   return min(diff(a+x[n], b, x, n-1), diff(a, b+x[n], x, n-1));
} 

int main() {
  int n;
  while(cin >> n, n) {
    int x[n];
    rep(i, n) cin >> x[i];
    cout << diff(0, 0, x, n-1) << endl;
  }
}

