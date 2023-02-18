#include <bits/stdc++.h>
using namespace std;

vector<string> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    unordered_map<string, int> um;
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        um[str]++;
    }   
    for(int i = 0; i < m; i++){
        string str;
        cin >> str;
        if(um.find(str) == um.end()){
            v.push_back(str);
        }
    
    }
    for(auto i : v) cout << i << " ";
    cout << '\n';
    // sort(v.begin(), v.end());
    // cout << v.size() << '\n';
    // for(auto i : v) cout << i << '\n';

}   