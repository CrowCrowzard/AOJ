#include <iostream>
using namespace std;

int main() {
  int n;

  while(1) {
    cin >> n;
    if(n == 0)break;

    int max = 0;
    int min = 1000;

    for(int i = 0; i < n; i++) {
      int sum = 0;
      for(int j = 0; j < 5; j++) {
	int point;
	cin >> point;
	sum += point;
      }
      if(sum > max) max = sum;
      if(sum < min) min = sum;
    }
    cout << max << ' ' << min << endl;
  }
}

