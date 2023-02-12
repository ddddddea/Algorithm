#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    while(N--) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    for(auto i : v) {
        cout << i.first << " " << i.second << '\n';
    }
}