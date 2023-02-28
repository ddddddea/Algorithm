#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> v;


void pre(string str, vector<ll>& v) {
    string s;
    bool flag = true;
    for(auto i = str.rbegin(); i != str.rend(); i++) {
        char ch = *i;
        if(ch == '0' && flag) continue;
        else {
            flag = false;
            s.push_back(*i);
        }
    }
    v.push_back(atoll(s.c_str()));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        pre(str, v);
    }
    sort(v.begin(), v.end());
    for(auto i : v) cout << i << '\n';
}