#include <bits/stdc++.h>
using namespace std;


void isPalin(int l, int r, string& str) {
    if(l >= r) { cout << "yes" << '\n'; return;}
    if(str[l] != str[r]) { cout << "no" << '\n'; return;}
    isPalin(l+1, r-1, str);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(1) {
        string str;
        cin >> str;
        if(str == "0") break;
        int r = (int)(str.length()) - 1;
        isPalin(0, r, str);
    }
}