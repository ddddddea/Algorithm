#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while(tc--) {
        unordered_map<string, int> um;
        int n, ans = 1;
        cin >> n;
        while(n--) {
            string a, b;
            cin >> a >> b;
            um[b]++;
        }
        for(auto i : um) ans *= i.second + 1;
        cout << ans - 1 << '\n';
    }
}