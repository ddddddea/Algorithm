#include <bits/stdc++.h>
using namespace std;

string str;

void chk(int s, int e) {
    if(s>=e) {
        cout << 1 << '\n';
        return;
    }
    else {
        if(str[s] != str[e]) {
            cout << 0 << '\n';
            return;
        }
        else chk(s+1, e-1);
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> str;
    int len = str.length();
    chk(0, len-1);

}   