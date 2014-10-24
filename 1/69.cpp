#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string s;
  while(getline(cin, s)) {
    if(s[0] == '0') break;
    vector<int> card;
    int one = 0;
    for(int i = 0; i < s.size(); i++) {
      if('0' <= s[i] && s[i] <= '9') {
        if(i+1 != s.size() && '0' <= s[i+1] && s[i+1] <= '3') {
          card.push_back((s[i]-'0')*10 + (s[i+1]-'0'));
          i++;
        } else {
          card.push_back(s[i]-'0');
        }
        if(i > 0 && s[i-1] == ' ' && s[i] == '1') one++;
        else if(i == 0 && s[i+1] == ' ' && s[i] == '1') one++;
      }
    }
    sort(card.begin(), card.end(), greater<int>());

    int ans = 0;
    for(int i = 0; i < card.size(); i++) {
      if(card[i] != 1) {
        if(card[i] > 10) ans += 10;
        else ans += card[i];
      } else {
        if(ans+10+one <= 21) ans += 11;
        else ans += 1;
        one--;
      }
    }
    if(ans > 21) ans = 0;
    cout << ans << endl;
  }
}
