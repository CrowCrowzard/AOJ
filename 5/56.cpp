#include <iostream>
using namespace std;

int main() {
  int n, k; cin >> n >> k;
  int half = size/2, field[510][510] = {};

  for(int i = 0; i < half+1; i++) {


  while(k--) {
    int x, y; cin >> x >> y;
    if(x > half) x = n-x;
    if(y > half) y = n-y;
    int tile = 
