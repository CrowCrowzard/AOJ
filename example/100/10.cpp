//小宮先輩
#include <iostream>
using namespace std;
 
int main(){
  int a,b,ans;
  char op;
  while(1){
    ans=0;
    cin >> a >> op >> b;
    switch(op){
    case '+':
      ans=a+b;
      break;
 
    case '-':
      ans=a-b;
      break;
 
    case '*':
      ans=a*b;
      break;
 
    case '/':
      ans=a/b;
      break;
    }
 
    if(op=='?') break;
    cout << ans << endl;
  }
 
 
}
