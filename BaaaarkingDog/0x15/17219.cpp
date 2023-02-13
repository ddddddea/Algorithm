#include <bits/stdc++.h>
using namespace std;

unordered_map<string, string> pw_list;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    while(N--) {
        string site, pw;
        cin >> site >> pw;
        pw_list[site] = pw;
    }
    while(M--) {
        string query;
        cin >> query;
        cout << pw_list[query] << '\n';
    }
}