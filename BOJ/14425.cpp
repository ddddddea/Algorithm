#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, cnt = 0;
    cin >> N >> M;
    unordered_map<string, int> um;
    while(N--) {
        string str;
        cin >> str;
        um[str] = 1;
    }
    while(M--) {
        string query;
        cin >> query;
        if(um.find(query) != um.end()) cnt++;
    }
    cout << cnt << '\n';
}