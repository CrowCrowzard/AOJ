#include <iostream>
using namespace std;

int main() {
  for(int i = 0; i < 9; i++) {
    string s;
    int a, p;
    cin >> s >> a >> p;
    int ans = 200*a + 300*p;

    cout << s << ' ' << a+p << ' '<< ans << endl;
  }
}
