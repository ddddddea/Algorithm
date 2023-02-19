#include <bits/stdc++.h>
using namespace std;


void solve_by_stack(string& str) {
    stack<char> s;
    bool flag = true;
    for(auto c: str){
        if(c == '(') s.push('(');
        else {
            if(s.empty()) {
                flag = false;
                break;
            }
            s.pop();
        }
    }
    if(!s.empty()) flag = false;
    if(flag) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    while(N--){
        string str;
        cin >> str;
        solve_by_stack(str);
    }

}