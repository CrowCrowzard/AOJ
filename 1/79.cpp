#include <iostream>
using namespace std;

int main() {
  string body;

  while(1) {
    cin >> body;
    if(body[0] == '0')break;
    int count = 0;
    bool b = false;

    
    //色の確認
    char c = body[0];  
    for(int i = 0; i <= body.length; i++) {
      if(i == body.length) {
	cout << count << endl;
	b == true;
      }
      if(c != body[i] && !b)break;
    }

    //色がすべて同じなら回数出力
    if(b) {
      cout << count << endl;
      continue;
    }
  }


}

