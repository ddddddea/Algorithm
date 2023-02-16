#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, n;
    cin >> T;
    while(T--) {
        unordered_map<string, int> um;
        unordered_set<string> us;
        cin >> n;
        int ans = n;
        while(n--){
            string a, b;
            cin >> a >> b;
            us.insert(b);
            if(um.find(b) == um.end()) um[b] = 1;
            else um[b] += 1;
        }
        if(us.size() != 1) {
            int tmp = 1;
            for(auto i = us.begin(); i != us.end(); i++) {
                tmp *= um[*i];
            }
            ans += tmp;
        }
        cout << ans << '\n';
    }
}