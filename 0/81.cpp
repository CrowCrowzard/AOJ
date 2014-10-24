#include <iostream>
#include <cstdio>
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

int main() {
  string s;
  while(cin >> s) {
    double p[6];
    int cnt = 0;
    rep(i, s.size()) {
      string tmp;
      rep(j, s.size()-i) {
        if(s[i+j] == ',' || i+j+1 == s.size()) {
          p[cnt] = stod(tmp);
          //cout << tmp << ' ' << p[cnt] << endl;
          i += j;
          break;
        }
        tmp += s[i+j];
      }
      cnt++;
    }
    
    double x[3], y[3];
    rep(i, 6) {
      if(i%2 == 0) x[i/2] = p[i];
      else y[i/2] = p[i];
    }

    //rep(i, 3) cout << x[i] << ' ' << y[i] << endl;

    if(x[0] < x[1]) swap(x[0], x[1]);
    if(y[0] < y[1]) swap(y[0], y[1]);

    double cx = (x[0]-x[1])/2, cy = (y[0]-y[1])/2;
    
   //以下が上手くいかない 
    int sx = (cx < x[2])? 1 : -1, sy = (cy < y[2])? 1 : -1;
    
    double ax = x[2] - (x[2] - cx*sx)*2, ay = y[2] - (y[2] - cy*sy)*2;
    printf("%.5lf %.5lf\n", ax, ay);           
  }
}

