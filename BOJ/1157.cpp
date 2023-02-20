#include <bits/stdc++.h>
using namespace std;

int ar[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i < len; i++) {
        int ch = (int)str[i];
        if(ch >= 97) ar[ch-97]++;
        else ar[ch - 65]++;
    }
    int max_cnt = 0;
    int max_idx = -1;
    int cnt = 0;
    for(int i = 0; i < 26; i++) {
        if(max_cnt < ar[i]) {
            max_cnt = ar[i];
            max_idx = i;
        }
    }
    for(int i = 0; i < 26; i++) {
        if(max_cnt == ar[i]) cnt++;
    }
    if(cnt > 1) cout << "?" << '\n';
    else cout << (char)(max_idx + 65) << '\n';
}