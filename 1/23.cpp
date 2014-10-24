#include <iostream>
using namespace std;

int main() {
  double st, lt;
  while(cin >> st >> lt) {
    if(st < 35.50 && lt < 71.00) cout << "AAA" << endl;
    else if(st < 37.50 && lt < 77.00) cout << "AA" << endl;
    else if(st < 40.00 && lt < 83.00) cout << "A" << endl;
    else if(st < 43.00 && lt < 89.00) cout << "B" << endl;
    else if(st < 50.00 && lt < 105.00) cout << "C" << endl;
    else if(st < 55.00 && lt < 116.00) cout << "D" << endl;
    else if(st < 70.00 && lt < 148.00) cout << "E" << endl;
    else cout << "NA" << endl;
  }
}
