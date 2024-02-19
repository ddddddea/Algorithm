#include <bits/stdc++.h>
using namespace std;

void solve(string& str) {
    int l=str.length();
    int s=0, score=1, result=0;
    bool flag=true;
    while(s<l) {
        if(str[s]=='O') {
            result += score;
            score++;
        }
        else {
            score=1;
        }
        s++;
    }
    cout << result << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(n--) {
        string str;
        cin >> str;
        solve(str);
    }
}