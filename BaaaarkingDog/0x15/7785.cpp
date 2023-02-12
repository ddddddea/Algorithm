#include <bits/stdc++.h>
using namespace std;

unordered_set<string> s;
vector<string> v;

void ord(string& name, int mode){
    if(mode == 0) { // enter
        s.insert(name);
    }
    else {
        s.erase(name);
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    while(N--) {
        string name, mode;
        cin >> name >> mode;
        if(mode == "enter") ord(name, 0);
        else ord(name, 1);
    }
    for(auto c : s) v.push_back(c);
    sort(v.begin(), v.end());
    int len_v = v.size();
    for(int i = len_v - 1; i >= 0; i--) {
        cout << v[i] << '\n';
    }
}