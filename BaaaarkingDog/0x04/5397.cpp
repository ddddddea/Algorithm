#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        string str;
        cin >> str;
        list<char> l;
        auto cur = l.end();
        int len = str.length();
        for(int i = 0; i < len; i++) {
            char ord = str[i];
            if(ord == '<') {
                if(cur != l.begin()) cur--;
            }
            else if(ord == '>') {
                 if(cur != l.end()) cur++;
            }
            else if(ord == '-') {
                if(cur != l.begin()) {
                    cur--;
                    cur = l.erase(cur);
                }
            }
            else {
                cur = l.insert(cur, ord);
                cur++;
            }
        }
        for(auto s : l) cout << s;
        cout << '\n';
    }

}