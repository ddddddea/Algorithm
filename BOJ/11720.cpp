#include <bits/stdc++.h>
using namespace std;


int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int N, sum = 0; string str;
    cin >> N >> str;
    for(int i = 0; i< N; i++) {
        sum += str[i] - '0';
    }
    cout << sum << '\n';
}