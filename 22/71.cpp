#include <iostream>
#include <string>
using namespace std;
 
int main() {
  int k = 0, u = 0, p = 0, c = 0;
  string s;
 
  cin >> s;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == 'K')k++;
    else if(s[i] == 'U')u++;
    else if(s[i] == 'P')p++;
    else if(s[i] == 'C')c++;
  }
 
  int cnt = 0;
  while(k > 0 && u > 0 && p > 0 && c > 0) {
    cnt++;
    k--, u--, p--, c--;
  }
  cout << cnt << endl;
}
