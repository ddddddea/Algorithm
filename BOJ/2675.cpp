#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        string str;
        int cnt;
        cin >> cnt >> str;
        int len = str.length();
        for(int i = 0; i < len; i++) {
            for(int j = 0; j < cnt; j++) cout << str[i];
        }
        cout << '\n';
    }

}