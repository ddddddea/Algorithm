#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; string str;
    cin >> n;
    while(n--) {
        int cnt; 
        cin >> cnt >> str;
        int l = str.length();
        for(int i=0; i<l; i++) {
            for(int j=0; j<cnt; j++) cout << str[i];
        }
        cout << '\n';
    }

}