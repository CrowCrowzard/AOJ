#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> array;
  int n, a;

  cin >> n;
  
  for(int i = 0; i < n; i++) {
    cin >> a;
    array.push_back(a);
  }
  for(int i = n-1; i > 0; i--) cout << array[i] << ' ';
  cout << array[0] << endl;
}
