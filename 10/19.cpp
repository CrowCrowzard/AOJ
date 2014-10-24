#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  int n, k; 
 
  while(cin >> n >> k, n+k) {
    vector<int> s(k);
    int b;
 
    for(int i = 0; i < k; i++) {
      cin >> s[i];
    }
 
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < k; j++) {
	cin >> b;
	s[j] -= b;
      }
    }
 
    bool ans = true;
    for(int i = 0; i < k; i++) {
      if(s[i] < 0) ans = false;
    }
     
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}
