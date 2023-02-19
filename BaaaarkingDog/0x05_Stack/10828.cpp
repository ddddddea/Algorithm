#include <bits/stdc++.h>
using namespace std;

stack<int> s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        string ord;
        cin >> ord;
        if(ord == "push") {
            int n;
            cin >> n;
            s.push(n);
        }
        else if(ord == "pop") {
            if(s.empty()) cout << "-1" << '\n';
            else {
                cout << s.top() << '\n';
                s.pop();
            }
        }
        else if(ord == "size") {
            cout << s.size() << '\n';
        }
        else if(ord == "empty") {
            cout << s.empty() << '\n';
        }
        else {
            if(s.empty()) cout << "-1" << '\n';
            else cout << s.top() << '\n';
        }
    }
}