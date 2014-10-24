#include <iostream>
using namespace std;

int main() {
  double n;

  while(cin >> n) {
    if(n < 0) break;

    string s;    
    double x = 128;
    for(int i = 0; i < 12; i++) {
      if(i == 8) s += '.';
      double cal = n/x;
      if((int)cal == 1) {
	s += '1';
	n -= x;
      }
      else {
	s += '0';
      }
      x /= 2;
    }
    if() cout << s << endl;
    else cout << "NA" << endl;
  }
}
