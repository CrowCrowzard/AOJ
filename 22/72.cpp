#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int h, w; cin >> h >> w;
  int field[100][100] = {};
  string tmp; getline(cin, tmp);

  for(int i = 0; i < h; i++) {
    string s; getline(cin, s);
    for(int j = 0; j < w; j++) {
      field[i][j] = s[j]-'0';
    }
  }

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(i == 0 && j == 0) continue;
      else if(i == 0) field[i][j] += field[i][j-1];
      else if(j == 0) field[i][j] += field[i-1][j];
      else field[i][j] += min(field[i][j-1], field[i-1][j]);
    }
  }
  cout << field[h-1][w-1] << endl;
}
