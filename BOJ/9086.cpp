#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while(n--) {
        string str;
        cin >> str;
        cout << str.front() << str.back() << '\n';
    }

}