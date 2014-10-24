#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int puzzle[9][9];
bool field[9][9];

int dx[] = {1, 2, 0, 1, 2, 0, 1, 2};
int dy[] = {0, 0, 1, 1, 1, 2, 2, 2}; 

void search1(int x, int y) {
  int n = puzzle[y][x];
  for(int i = x+1; i < 9; i++) {
    if(puzzle[y][i] == n) {
      field[y][x] = field[y][i] = false;
    }
  }

  for(int i = y+1; i < 9; i++) {
    if(puzzle[i][x] == n) {
      field[y][x] = field[i][x] = false;
    }
  }
}

void search2(int x, int y) {
  if(


int main() {
  int n; cin >> n;
  while(n--) {
    rep(i, 9) {
      rep(j, 9) {
        cin >> puzzle[i][j];
        field[i][j] = true;
      }
    }

    rep(i, 9) {
      rep(j, 9) {
        search1(j, i);
        if(i%3 == 0 && j%3 == 0) search2(j, i);
      }
    }

    rep(i, 9) {
      rep(j, 9) {
        if(field[i][j]) cout << ' ';
        else cout << '*';
        cout << puzzle[i][j];
      }
      cout << endl;
    }
    if(n != 0) cout << endl;
  }
}

