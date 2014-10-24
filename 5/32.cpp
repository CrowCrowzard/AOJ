#include <iostream>
using namespace std;

int main() {
  int h, m, s;
  while(cin >> h >> m >> s) {
    int time = (h*3600 + m*60 + s) * -1;
    cin >> h >> m >> s;
    time += h*3600 + m*60 + s;

    h = time/3600;
    time %= 3600;
    m = time/60;
    s = time%60;
    cout << h << ' ' << m << ' ' << s << endl;
  }
}
