#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> v;
    int len = 0;
    for(int i = 0; i < 5; i++) {
        string str;
        cin >> str;
        v.push_back(str);
        if(str.length() > len) len = str.length();
    }
    for(int j = 0; j < len; j++) {
        for(int i = 0; i < 5; i++) {
            if(v[i].length() > j) cout << v[i][j];
        }
    }
}