#include <bits/stdc++.h>
using namespace std;

list<int> l;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) l.push_back(i);
    auto cur = l.begin();
    int cnt = 1;
    while(!l.empty()) {
        if(cnt == k) {
            cnt = 1;
            v.push_back(*cur);
            cur = l.erase(cur);            
        }
        else {
            cnt++;
            cur++;
        }
        if(cur == l.end()) {
            cur = l.begin();
        }
    }
    cout << "<";
    for(int i = 0; i < v.size(); i++) {
        if(i+1 == v.size()) cout << v[i] << ">";
        else cout << v[i] << ", ";
    }
}