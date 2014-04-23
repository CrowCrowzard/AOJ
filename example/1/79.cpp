//北野先輩
#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <set>
 
using namespace std;
 
inline bool ok(const string & v){
    for (int i = 1; i < v.size(); i++){
        if (v[i] != v[0]) return false;
    }
    return true;
};
 
inline char other(char a, char b){
    if (a>b)swap(a, b);
    if (a == 'g' && b == 'r'){
        return 'b';
    }
    if (a == 'b' && b == 'g'){
        return 'r';
    }
    if (a == 'b' && b == 'r'){
        return 'g';
    }
    throw "";
}
 
struct state {
    string str;
    int n;
};
 
int main(){
    string s;
    while (cin >> s, s != "0"){
        queue<state> q;
        set<string> dp;
        q.push({ s, 0 });
 
        int ans = -1;
        while (q.size()){
            state sta = q.front();
            q.pop();
            string & sv = sta.str;
            auto pr = dp.insert(sv);
            if (!pr.second){
                continue;
            }
            if (ok(sv)){
                ans = sta.n;
                break;
            }
            for (int i = 1; i < sv.size(); i++){
                if (sv[i] != sv[i - 1]){
                    char a = sv[i];
                    char b = sv[i - 1];
                    sv[i] = sv[i - 1] = other(a, b);
                    q.push({ sv, sta.n + 1 });
                    sv[i] = a;
                    sv[i - 1] = b;
                }
            }
        }
        if (ans == -1){
            cout << "NA" << endl;
        }
        else{
            cout << ans << endl;
        }
    }
}
