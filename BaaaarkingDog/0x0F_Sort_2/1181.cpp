#include <bits/stdc++.h>
using namespace std;

unordered_set<string> s;

bool cmp(const string& l, const string& r) {
    int len_l = l.length();
    int len_r = r.length();
    if(len_l == len_r) return l < r;
    else return len_l < len_r;
}

string ar[20010];
vector<string> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> ar[i]; 
        s.insert(ar[i]);
    }
    for(auto i : s) v.push_back(i);
    sort(v.begin(), v.end(), cmp);
    for(auto i : v) cout << i << '\n';

}