//森先輩
#include<iostream>
#include<string>
using namespace std;
 
int main(){
   string s;
    
   cin >> s;
    
   for(int i=0; i<s.size(); i++){
      if(i%2==0){
         if(s[i]=='1') continue;
         if(s[i]=='2') cout << "k";
         if(s[i]=='3') cout << "s";
         if(s[i]=='4') cout << "t";
         if(s[i]=='5') cout << "n";
         if(s[i]=='6') cout << "h";
         if(s[i]=='7') cout << "m";
         if(s[i]=='8') cout << "y";
         if(s[i]=='9') cout << "r";
         if(s[i]=='0'&&s[i+1]=='U') cout << "n";
         else if(s[i]=='0') cout << "w";
      }else{
         if(s[i-1]=='0'){
            if(s[i]=='T') cout << "a";
            if(s[i]=='U') cout << "n";
            if(s[i]=='D') cout << "o";
         }else{
            if(s[i]=='T') cout << "a";
            if(s[i]=='L') cout << "i";
            if(s[i]=='U') cout << "u";
            if(s[i]=='R') cout << "e";
            if(s[i]=='D') cout << "o";
         }
      }
   }
   cout << endl;
    
   return 0;
}
