#include <bits/stdc++.h>
using namespace std;

int ar[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i < 26; i++) ar[i] = -1;
    for(int i = 0; i < len; i++) {
        int idx = (int)(str[i]-'a');
        if(ar[idx] == -1) ar[idx] = i;
    }
    for(auto i : ar) cout << i << " ";
    cout << '\n';
}