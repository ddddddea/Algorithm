#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    int ans = 0;
    int len = str.length();
    for(int i = 0; i < len; i++) {
        int ch = str[i];
        if(ch < 80) {
            ans += ((ch-65)/3 + 3);
        }
        else {
            if(80 <= ch && ch <= 83) {
                ans += 8;
            }
            else if(84 <= ch && ch <= 86) {
                ans += 9;
            }
            else ans += 10;
        }
    }
    cout  << ans << '\n';
}