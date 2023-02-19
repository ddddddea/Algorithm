#include <bits/stdc++.h>
using namespace std;

vector<string> v, ans;
unordered_map<string, int> um;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    while(n--) {
        string str;
        cin >> str;
        v.push_back(str);
    }
    while(m--) {
        string str;
        cin >> str;
        um[str]++;
    }
    for(int i = 0; i < (int)v.size(); i++) {
        if(um.find(v[i]) != um.end()) ans.push_back(v[i]);
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for(auto i : ans) cout << i << '\n';
}