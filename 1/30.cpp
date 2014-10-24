#include <iostream>
#include <deque>
using namespace std;

bool Search(deque<char>& rdeqc, char c) {
  for (deque<char>::iterator itc = rdeqc.begin(); itc != rdeqc.end(); itc++) {
    if(*itc == c) return true;
  }
  return false;
}

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    deque<char> deq;
    for(int j = 0; j < s.size(); j++) {
      if(j == 0) deq.push_front(s[j]);
      if(j%3 == 2) {
	if(Search(deq, s[j+1])) continue;
	if(s[j] == '>') deq.push_back(s[j+1]);
	else deq.push_front(s[j+1]);
      }
    }
    
    for(int i = 0; i < deq.size(); i++) cout << deq[i];
    cout << endl;
  }
}
